#ifndef iostreamS_h
#define iostreamS_h
     //#include
/* MIT License
 *

 Copyright (c) 2023-2024

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#include <chrono>
#include <cstring>
#include <iostream>
#include <thread>
#include <pthread.h>
#include <unistd.h>
#include <vector>

#ifdef __MACH__
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <sys/socket.h>
#endif

#ifdef __unix__
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <sys/socket.h>
#define __DARWIN_FD_ZERO(p) FD_ZERO(p)
#define __DARWIN_FD_SET(fd, p) FD_SET(fd, p)
#define __DARWIN_FD_ISSET(fd, p) FD_ISSET(fd, p)
#endif

#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#define __DARWIN_FD_ZERO(p) FD_ZERO(p)
#define __DARWIN_FD_SET(fd, p) FD_SET(fd, p)
#define __DARWIN_FD_ISSET(fd, p) FD_ISSET(fd, p)
#endif
const char __ip_address[]="127.0.0.1";
const int PORT=6969;
const int32_t backlog = 3;
const uint32_t S_IZE = 1024;
bool log_enabled = false;
#define RE_SET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
/* encapsulation client data */
struct ClientDetails {
     int32_t                     ClientSocketFileDescription;
     int32_t                     serverSocketFileDescription;
     std::vector<int32_t>        whichClient;
     bool                        broadCastingPrevMsgToClient;
     char                        MsgResv[2048];
     int32_t                     tempFD;
     explicit ClientDetails(int32_t fd) {
          this->ClientSocketFileDescription = fd;
          this->serverSocketFileDescription = -1;
          this->tempFD = 0;
          this->broadCastingPrevMsgToClient = false;
          memset(this->MsgResv, '\0', 1023);
     }
};
typedef struct ClientDetails *CliDetails;

/* linked list for storing data*/

struct Chat {
     char           *msg;
     Chat           *next;
     explicit Chat(char msg[S_IZE]) {
          this->msg =   (char *) calloc(S_IZE, sizeof(char));
          strcpy(this->msg, msg);
          this->next =  nullptr;
     }
} *chatHead = nullptr, *chatTail = nullptr;

/* function prototype */
void saveChat(char msg[S_IZE]);                                   // saving all the received msg for future reference
void ChatMemoryManagement();                                    // for manually deleting all the chat data for preventing memory leak
void messageBroadcast(CliDetails);                              // for broadcasting all the previous chat to newly join client
void broadcastChat(CliDetails client);                          // for broadcasting the current resv chat

void  __attribute__((destructor)) ChatMemoryManagement();       // destructor for freeing the allocted heap memory, called during exit

void cleanUp(CliDetails client) {                                 // clearing the screen during logging and also help to shutting down all the connected client
     char ch;
     while (true) {
          scanf("Press any key to exit");
          std::cin >> ch;
          if (ch == 'q') {
               std::cout << RED << "shutting down server and client \n" << RE_SET;
               const char exitNote[] = {'1', 'e', '\0'};
               for (int fd : client->whichClient) {
                    send(fd, exitNote, strlen(exitNote), 0);  // broadcasting exit msg to all the connected client
               }
               for (int fd : client->whichClient) {
                    close(fd);
                    shutdown(fd, SHUT_RDWR);                  // shutting down all the file descriptor
               }
               close(client->serverSocketFileDescription);
               shutdown(client->serverSocketFileDescription, SHUT_RDWR);
               std::this_thread::sleep_for(std::chrono::milliseconds(3000));
               system("clear"); // clearing the window
               delete client;   // deleting the client object
               exit(0);
          }
          else system("clear");   // if any other key pressed
     }
}
int32_t server(const char ip[] , int port , int logging ) ;

     //int32_t main(int argc,   char *argv[]){
     //       char log=(int)argv[1];
     //       server(__ip_address,PORT, log);
     //
     //    return 0;
     //}


int32_t server(const char ip[], const int port,  int logging) {
     int argv[2];
     argv[1]=logging;
     CliDetails clientDetails = new ClientDetails(0);
     system("clear");
     std::thread t1(cleanUp, clientDetails);
     t1.detach();
     if (argv[1]) {
          std::cout << "Server is running on port "<<port<<"\n";
          std::cout << GREEN << "logging enable\n"<< RE_SET;
          log_enabled = true;
     } else {
          std::cout << RED << "logging disable\n"<< RE_SET;
          log_enabled = false;
     }

     int32_t serverSocketFileDiscription = socket(AF_INET, SOCK_STREAM, 0);
     if (serverSocketFileDiscription <= 0) {
          if(log_enabled) perror("socket creation error\n");
          exit(1);
     }
          //

     clientDetails->whichClient.reserve(30);
          // setting serverSocketFileDescription to allow multiple connection
     int opt = 1;
     if (setsockopt(serverSocketFileDiscription, SOL_SOCKET, SO_REUSEADDR, (char *) &opt, sizeof(opt))< 0) {
          if(log_enabled)perror("setsockopt(SO_REUSEADDR) failed");
          exit(2);
     }
     struct sockaddr_in   address;
     address.sin_family = AF_INET;
     address.sin_port   = htons(port);
     inet_pton(AF_INET, "127.0.0.1", &address.sin_addr.s_addr);
     int32_t BindResult = bind(serverSocketFileDiscription, (struct sockaddr *) &address, sizeof address);
          //  BindResult?exit(2):printf("binding successful\n");
     if (BindResult == 0) {
          if(log_enabled)printf("binding successful\n");
     } else {
          if(log_enabled) perror("biding unsuccessful\n");
          exit(2);
     }

     uint64_t listenRusult = listen(serverSocketFileDiscription, backlog);
     if (listenRusult == 0) {
          if(log_enabled) printf("listening successful\n");
     } else {
          if(log_enabled)perror("listening unsuccessful\n");
          exit(3);
     }

     if(argv[1]) std::cout << "Server is running on port " << port << "\n waiting for client to connect\n";
     int    activity ;
     int    sd = 0;
     fd_set readfd;
     size_t valRead;
     int    maxfd;
     while (true) {
          if(log_enabled) printf("waiting for activity\n");
               // clear the socket set
          FD_ZERO(&readfd);
          FD_SET(serverSocketFileDiscription, &readfd);
          maxfd = serverSocketFileDiscription;
          for (int sd : clientDetails->whichClient)
               if (sd > 0) {
                    FD_SET(sd, &readfd);
               }
          if (sd > maxfd) {
               maxfd = sd;
          }
          activity = select(maxfd + 1, &readfd, nullptr, nullptr, nullptr);
          if (activity < 0) {
               perror("select error\n");
          }
          /*
           * if something happen on master socket then it's an incoming connection
           */
          if (FD_ISSET(serverSocketFileDiscription, &readfd)) {
               socklen_t addressLen = sizeof address;
               clientDetails->ClientSocketFileDescription =
               accept(serverSocketFileDiscription, (struct sockaddr *) &address, &addressLen);

               if (clientDetails->ClientSocketFileDescription < 0) {
                    perror("error in accepting incoming connection\n");
                    break;
               }
               clientDetails->whichClient.push_back(clientDetails->ClientSocketFileDescription);
               if (argv[1])
                    std::cout << GREEN << "New client joined the server\n"
                    << RE_SET;
               if (log_enabled) printf("New connection , socket fd is %d , ip is : %s , port : %d\n",clientDetails->ClientSocketFileDescription,inet_ntoa(address.sin_addr),ntohs(address.sin_port));
               clientDetails->broadCastingPrevMsgToClient = true;
               clientDetails->tempFD = clientDetails->ClientSocketFileDescription;
               std::thread broadcastThread(broadcastChat,clientDetails);
               broadcastThread.join();

          }


          /*
           * else its some IO operation on some other socket
           */

          char buffer[1024];
          for (int i = 0; i < clientDetails->whichClient.size(); ++i) {
               sd = clientDetails->whichClient[i];
               if (FD_ISSET(sd, &readfd)) {

                    if ((valRead = read(sd, buffer, 1024)) == 0) {
                         getpeername(sd, (struct sockaddr *) &address, (socklen_t *) &address);
                         if (argv[1]) std::cout << RED << "Host disconnected " << RE_SET;
                         if (log_enabled)
                              if (argv[1])
                                   std::cout << RED << "Host disconnected ,ip " << inet_ntoa(address.sin_addr)
                                   << " ,port " << ntohs(address.sin_port) << "\n" << RE_SET;
                         close(sd);
                         auto it = find(clientDetails->whichClient.begin(), clientDetails->whichClient.end(), sd);
                         if (it != clientDetails->whichClient.end())
                              clientDetails->whichClient.erase(it);
                    } else {
                         if (valRead > 1) {
                              strcpy(clientDetails->MsgResv, buffer);
                                   // saving for future reference
                              saveChat(clientDetails->MsgResv);

                              clientDetails->tempFD = sd;
                                   // send to all the connected client as it is
                              std::thread broadcastThread(messageBroadcast,clientDetails);
                              broadcastThread.detach();
                                   // for creating the set on server
                              if (buffer[1] == 'a') {
                                   if (argv[1])
                                        std::cout << RED << "ATTENTION! " << RE_SET << "file disc: "
                                        << clientDetails->tempFD << " Added Set : " << buffer[0] - 48
                                        << "\n";
                              }
                                   // if index encounter b then some  client have sent message to crate sub set;
                              if (buffer[1] == 'b') {
                                   if (argv[1])
                                        std::cout << RED << "ATTENTION! " << RE_SET
                                        << "New Answer added in set : "
                                        << buffer[0] - 48 << "\n";
                                   if (argv[1])
                                        std::cout << RED << "ATTENTION! " << RE_SET << "file disc: "
                                        << clientDetails->tempFD << " added new answer to set "
                                        << buffer[0] - 48 << "\n";

                              }
                              memset(buffer, '\0', 1024);
                         }
                    }
               }
          }
     }

     /* clean up */

     close(serverSocketFileDiscription);
     shutdown(serverSocketFileDiscription,
              SHUT_RDWR);
     for (auto fd: clientDetails->whichClient) {
          close(fd);
          shutdown(fd,
                   SHUT_RDWR);
     }
     delete clientDetails;
     system("clear");
     system("exit");
     return 0;
}
/*used to broadcast the message to all the connected client except the sender */
void messageBroadcast(CliDetails client) {
     for (auto fd : client->whichClient) {
          if(log_enabled) std::cout << RED << "file descriptor: " << fd << "\n";
          if (fd != client->tempFD) {
               if(log_enabled) std::cout << GREEN << "Broadcasting message to client: " << RE_SET << RED << fd << RE_SET << std::endl;
               send(fd, client->MsgResv, strlen(client->MsgResv), 0);
          }
     }
     memset(client->MsgResv, '\0', 1024);
}

void saveChat(char msg[S_IZE]) {
     if(log_enabled) std::cout << GREEN << "chat saved\n" << RE_SET;
     for (int i = 0; i < 20; ++i) {
          if(log_enabled) std::cout << msg[i];
     }
     if(log_enabled) std::cout << ".........\n";
     Chat *newChat = new Chat(msg);
     if (chatHead == nullptr) {
          chatHead = newChat;
          chatTail = newChat;
     } else {
          chatTail->next = newChat;
          chatTail = newChat;
     }
}
/* this will broadcast all the previous chat message and answer  */
void broadcastChat(CliDetails client) {
     if(log_enabled) std::cout<<GREEN<< "broadcasting chat to fd : "<< RE_SET <<RED<<client->tempFD << RE_SET <<std::endl;
     Chat *temp = chatHead;
     while (temp and client->broadCastingPrevMsgToClient) {
          std::this_thread::sleep_for(std::chrono::milliseconds(200));
          send(client->tempFD, temp->msg, strlen(temp->msg), 0);
          if(log_enabled) std::cout<<GREEN<<"message send: "<< RE_SET <<temp->msg<<std::endl;
          temp = temp->next;
     }
     char msg[] = {'1', 'Z', '\0'};
     std::this_thread::sleep_for(std::chrono::seconds(1));
     send(client->tempFD, msg, strlen(msg), 0);
     client->broadCastingPrevMsgToClient = false;
}

void ChatMemoryManagement() {
     if(log_enabled) std::cout <<RED<< "deleting chat memory\n"<< RE_SET;
     while (chatHead) {
          Chat *ChatNext = chatHead->next;
          /* deleting chat node*/
          delete chatHead;
          chatHead = ChatNext;
     }
     chatHead = nullptr;
     std::this_thread::sleep_for(std::chrono::seconds(1));
     if(log_enabled) system("clear");
}
     // memory leak management
#endif /* iostreamS_h */

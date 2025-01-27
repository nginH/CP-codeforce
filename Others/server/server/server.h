//
//  server.h
//  server
//
//  Created by Harsh Anand on 31/03/2024.
//

#ifndef server_h
#define server_h

#include <vector>
#include <istream>

uint32_t port = 6969;
int32_t backlog = 3;
const uint32_t SIZE = 1024;
bool log_enabled = false;
const char ip[]="127.0.0.1";

class ClientDetails {
public:
     int32_t ClientSocketFileDiscription;
     int32_t serverSocketFileDiscription;
     std::vector<int> whichClient;
     bool broadCastingPrevMsgToClient;
     char MsgResv[2048]{};
     int32_t tempfd;
//     std::ofstream &file;
    explicit ClientDetails(int32_t fd) {
          this->ClientSocketFileDiscription = fd;
          this->serverSocketFileDiscription = -1;
          this->tempfd = 0;
          this->broadCastingPrevMsgToClient = false;
          memset(this->MsgResv, '\0', 1023);
     }
};
typedef struct ClientDetails *CliDetails;

struct Chat {
     char *msg;
     Chat *next;
     explicit Chat(char msg[SIZE]) {
          this->msg = (char *) calloc(SIZE, sizeof(char));
          strcpy(this->msg, msg);
          this->next = nullptr;
     }
} *chatHead = nullptr, *chatTail = nullptr;




#endif /* server_h */

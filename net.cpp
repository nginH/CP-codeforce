// Created by Harsh Anand on 10/12/2023.

// Client side C/C++ program to demonstrate Socket
#include <iostream>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#define PORT 8080

int main(int argc, char const* argv[]){

    int status, valread, client_fd;
    struct sockaddr_in serv_addr;
    char hello[] = "Hello from client";
    char buffer[1024] = {0};

    if ((client_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("\n Socket creation error \n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, "172.16.56.159", &serv_addr.sin_addr) <= 0) {
        printf("\n Invalid address/ Address not supported \n");
        return -1;
    }

    if ((status  = connect(client_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr))) < 0) {
        printf("\n Connection Failed \n");
    }
    send(client_fd, hello, strlen(hello), 0);
    printf("msg sent\n");
    valread = read(client_fd, buffer, 1024 - 1); // subtract 1 for the null terminator at the end
    printf("%s\n", buffer);

    // closing the connected socket
    close(client_fd);
    return 0;
}

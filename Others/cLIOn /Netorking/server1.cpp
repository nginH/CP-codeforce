//
// Created by Harsh Anand on 17/11/2023.
//#ic
#include <bits/stdc++.h>
#include <czmq.h>
int main(int argc ,char ** argv){
//server

     zsock_t *responde= zsock_new(ZMQ_REP);
     int r = zsock_bind(responde, "tcp://* :5555");
     if (r!=5555){
          perror("fail to bind top port\n");
     }
     while (true){
          char *msg = zstr_recv(responde);
          if (!strcmp(msg, "low Level")){
               zstr_send(responde,"Gang\n");
          }
          free(msg);
     }



     return 0;
}
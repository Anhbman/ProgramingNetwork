//
// Created by bumman on 20/12/2021.
//

#include "initClient.h"

int initSocket(const char *address, int port, UserData *userData) {
    int client_sock;
    struct sockaddr_in server_addr; /* server's address information */

    //Step 1: Construct socket
    userData->sockFd = socket(AF_INET,SOCK_STREAM,0);

    char* SERVER_ADDR = address;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_ADDR);

    if(connect(userData->sockFd, (struct sockaddr*)&server_addr, sizeof(struct sockaddr)) < 0){
        printf("\nError!Can not connect to sever! Client exit imediately! ");
        return 0;
    }

    return userData->sockFd;
}
//
// Created by bumman on 20/12/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>

#include "constant.h"

int loginUser (char * user, int sockFd){
    char Buff[MAX_LEN_BUFF];
    int recvSize = 0;
    int senSize = 0;
    char recvData[MAX_LEN_BUFF];

    senSize = send(sockFd,LOGIN, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(sockFd,user, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    recvSize = recv(sockFd, recvData, MAX_LEN_BUFF, 0);
    if (recvSize < 0)
        perror("\nError: ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';

    printf("loginUser: %s\n",recvData);

    if (strcmp(recvData,LOGIN_SUCCESS) == 0)
        return 1;
    return 0;
}
int registerUser (char *user, int sockFd) {
    int recvSize = 0;
    int sendSize = 0 ;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(sockFd,REGISTER,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(sockFd,user, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");

    recvSize = recv(sockFd, recvData, MAX_LEN_BUFF, 0);
    if (recvSize < 0)
        perror("\nError: ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';

    printf("register: %s\n",recvData);

    if (strcmp(recvData,LOGIN_SUCCESS) == 0)
        return 1;
    return 0;

}
int addFriend(char *user,int sockFd) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(sockFd,ADDFRIEND,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(sockFd,user, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");
    recvSize = recv(sockFd, recvData, MAX_LEN_BUFF, 0);
    if (recvSize < 0)
        perror("\nError: ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';

    printf("register: %s\n",recvData);

    if (strcmp(recvData,ADDFRIEND_SUCCESS) == 0)
        return 1;
    return 0;
}




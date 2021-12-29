//
// Created by bumman on 20/12/2021.
//

#include "handleClient.h"

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

int add_place (char* user,char * namePlace, char* category, int sockFd) {
    printf("add place client\n");
    int recvSize = 0;
    int senSize = 0;
    char* recvData = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    char* buff = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);

    strcpy(buff,user);
    strcat(buff,"|");
    strcat(buff,namePlace);
    strcat(buff,"|");
    strcat(buff,category);

    printf("Buff: %s", buff);
    senSize = send(sockFd,ADD_PLACE, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(sockFd,buff, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    recvSize = recv(sockFd, recvData, MAX_LEN_BUFF, 0);
    if (recvSize < 0)
        perror("\nError ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';

    if (strcmp(recvData,ADD_PLACE_OK) == 0) {
        free(buff);
        free(recvData);
        return 1;
    }

    free(buff);
    free(recvData);
    return 0;

}



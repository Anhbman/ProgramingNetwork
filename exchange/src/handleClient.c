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

int remove_place (UserData* userData, char *name, char *cate) {

    int senSize;

    senSize = send(userData->sockFd,REMOVE_PLACE, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

//    senSize = send(userData->sockFd,userData->username, MAX_LEN_BUFF, 0);
//    if (senSize < 0)
//        perror("\nError: ");

    char * place = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    sprintf(place,"%s|%s|%s",userData->username,name,cate);

    senSize = send(userData->sockFd,place, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    free(place);
    char* recvData;

    recvData = dataRecv(userData);
    if (strncmp(recvData,REMOVE_PLACE_OK,2) == 0) {
        printf("ok\n");
        free(recvData);
        return 1;
    }
    free(recvData);
    return 0;


}



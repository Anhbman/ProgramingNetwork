//
// Created by bumman on 20/12/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include "hepler.h"
#include "constant.h"
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

    if (strcmp(recvData,REGISTER_SUCCESS) == 0)
        return 1;
    else if (strcmp(recvData,USER_EXIST) == 0)
        return 2;
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

    if (strcmp(recvData,ADDFRIEND_SUCCESS) == 0)
        return 1;
    else if (strcmp(recvData,FRIEND_EXIST) == 0)
        return 2;
    return 0;
}
void showFriendList(UserData *userData) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(userData->sockFd,SHOW_FRIEND_LIST,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(userData->sockFd,userData->username, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");

    int tmp = 0;
    char* value;
    value = dataRecv(userData);

    char *token;

    token = strtok(value, "|");

    while (token != NULL) {
        GtkWidget *check;

        /* --- Get the check button --- */
        check = gtk_check_button_new_with_label(token);
        add_message(check, userData->screenApp->addFriendContainer.box_place1, userData);
        //}
        token = strtok(NULL, "|");

    }



}
void showUserList(UserData *userData) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(userData->sockFd,SHOW_USER_LIST,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(userData->sockFd,userData->username, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");
    while (1) {
        int tmp = 0;
        char* value;
        value = dataRecv(userData);
        printf("%s\n",value);
        if (strcmp(value,SEND_END) == 0) {
            free(value);
            break;
        }
        char *token;

        token = strtok(value, "|");

        while (token != NULL) {
            GtkWidget *check;


            /* --- Get the check button --- */
            check = gtk_check_button_new_with_label(token);
            add_message(check, userData->screenApp->addFriendContainer.box_place2, userData);
            //}
            token = strtok(NULL, "|");

        }

    }

}
void showFriendRequest(UserData *userData) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(userData->sockFd,SHOW_FRIEND_REQUEST,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(userData->sockFd,userData->username, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");
    while (1) {
        int tmp = 0;
        char* value;
        value = dataRecv(userData);
        if (strcmp(value,SEND_END) == 0) {
            free(value);
            break;
        }
        char *token;

        token = strtok(value, "|");

        while (token != NULL) {
            GtkWidget *check;


            /* --- Get the check button --- */
            check = gtk_check_button_new_with_label(token);
            add_message(check, userData->screenApp->friendRequestContainer.box_place, userData);
            //}
            token = strtok(NULL, "|");

        }

    }


}

int acceptFriend(char* user, int sockFd) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(sockFd,ACCEPT_FRIEND,MAX_LEN_BUFF,0);
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

    printf("Accept Friend: %s\n",recvData);

    if (strcmp(recvData,ACCEPT_FRIEND_SUCCESS) == 0)
        return 1;
    return 0;

}
int deleteRequest(char* user,int sockFd) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(sockFd,DELETE_REQUEST,MAX_LEN_BUFF,0);
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

    printf("Delete request: %s\n",recvData);

    if (strcmp(recvData,DELETE_REQUEST_SUCCESS) == 0)
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
int sharePlace(char* user,int sockFd) {
    int senSize,recvSize;
    char recvData[MAX_LEN_BUFF];
    senSize = send(sockFd,SHARE_PLACE, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(sockFd,user, MAX_LEN_BUFF, 0);
    printf("%s\n",user);
    if (senSize < 0)
        perror("\nError: ");


    recvSize = recv(sockFd, recvData, MAX_LEN_BUFF, 0);
    if (recvSize < 0)
        perror("\nError: ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';

    printf("loginUser: %s\n",recvData);

    if (strcmp(recvData,SHAREPLACE_SUCCESS) == 0)
        return 1;
    else if (strcmp(recvData,PLACE_EXIST) == 0)
        return 2;
    return 0;
}



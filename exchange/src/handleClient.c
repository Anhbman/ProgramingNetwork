//
// Created by bumman on 20/12/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include "hepler.h"
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
//        GtkWidget *gtkLabel = gtk_label_new(token);
//        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//        add_message(gtkLabel, userData->screenApp->homeContainer.box_place, userData);
//        token = strtok(NULL, "|");
            GtkWidget *check;


            /* --- Get the check button --- */
            check = gtk_check_button_new_with_label(token);
            add_message(check, userData->screenApp->addFriendContainer.box_place1, userData);
            //}
            token = strtok(NULL, "|");

        }

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
        if (strcmp(value,SEND_END) == 0) {
            free(value);
            break;
        }
        char *token;

        token = strtok(value, "|");

        while (token != NULL) {
//        GtkWidget *gtkLabel = gtk_label_new(token);
//        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//        add_message(gtkLabel, userData->screenApp->homeContainer.box_place, userData);
//        token = strtok(NULL, "|");
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
//        GtkWidget *gtkLabel = gtk_label_new(token);
//        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//        add_message(gtkLabel, userData->screenApp->homeContainer.box_place, userData);
//        token = strtok(NULL, "|");
            GtkWidget *check;


            /* --- Get the check button --- */
            check = gtk_check_button_new_with_label(token);
            add_message(check, userData->screenApp->friendRequestContainer.box_place, userData);
            //}
            token = strtok(NULL, "|");

        }

    }


}





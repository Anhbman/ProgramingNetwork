//
// Created by bumman on 20/12/2021.
//

#ifndef NETWORKPROGRAM_HANDLECLIENT_H
#define NETWORKPROGRAM_HANDLECLIENT_H

#include "appScreen.h"
#include "hepler.h"
#include "constant.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>

int loginUser (char * user, int sockFd);
int registerUser (char *user, int sockFd);
int addFriend(char *user,int sockFd);
void showFriendList(UserData *userData);
void showUserList(UserData *userData);
void showFriendRequest(UserData *userData);
int acceptFriend(char* user, int sockFd);
int sharePlace(char* user,int sockFd);


int add_place (char* user,char * namePlace, char* category, int sockFd);
int remove_place (UserData* userData, char *name);
#endif //NETWORKPROGRAM_HANDLECLIENT_H

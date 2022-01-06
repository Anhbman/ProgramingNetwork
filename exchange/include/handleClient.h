//
// Created by bumman on 20/12/2021.
//

#ifndef NETWORKPROGRAM_HANDLECLIENT_H
#define NETWORKPROGRAM_HANDLECLIENT_H

#include "appScreen.h"

int loginUser (char * user, int sockFd);
int registerUser (char *user, int sockFd);
int addFriend(char *user,int sockFd);
void showFriendList(UserData *userData);
void showUserList(UserData *userData);
void showFriendRequest(UserData *userData);

#endif //NETWORKPROGRAM_HANDLECLIENT_H

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
int add_place (char* user,char * namePlace, char* category, int sockFd);
#endif //NETWORKPROGRAM_HANDLECLIENT_H

//
// Created by bumman on 20/12/2021.
//

#ifndef NETWORKPROGRAM_INITCLIENT_H
#define NETWORKPROGRAM_INITCLIENT_H

#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "appScreen.h"

int initSocket(const char *address, int port, UserData *userData);

#endif //NETWORKPROGRAM_INITCLIENT_H

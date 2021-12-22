//
// Created by bumman on 22/12/2021.
//

#ifndef NETWORKPROGRAM_HEPLER_H
#define NETWORKPROGRAM_HEPLER_H

#include "constant.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "appScreen.h"

void add_message(GtkWidget *message, GtkWidget *addBox, UserData *userData);
char* dataRecv(UserData *userData);

#endif //NETWORKPROGRAM_HEPLER_H

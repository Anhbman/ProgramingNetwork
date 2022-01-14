//
// Created by bumman on 25/12/2021.
//

#ifndef NETWORKPROGRAM_SHARECONTROLLER_H
#define NETWORKPROGRAM_SHARECONTROLLER_H

#include "HomeController.h"
#include "gtk/gtk.h"
#include "appScreen.h"
#include "constant.h"
#include <sys/socket.h>
#include "hepler.h"
#include "constant.h"
#include "ShowController.h"


void on_back_share_clicked(GtkButton* button, UserData* userData);
void share_show(UserData* userData);
void share_show_place (UserData* userData);
void share_show_friend (UserData* userData);
void on_share_place_clicked(GtkButton* button, UserData* userData);

#endif //NETWORKPROGRAM_SHARECONTROLLER_H

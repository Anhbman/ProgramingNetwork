//
// Created by bumman on 21/12/2021.
//

#ifndef NETWORKPROGRAM_HOMECONTROLLER_H
#define NETWORKPROGRAM_HOMECONTROLLER_H

#include "gtk/gtk.h"
#include "appScreen.h"
#include "appScreen.h"
#include "constant.h"
#include <sys/socket.h>
#include "hepler.h"
#include "constant.h"
#include "ShowController.h"
#include "ShareController.h"

void add_message(GtkWidget *message, GtkWidget *addBox,UserData *userData);
void on_show_clicked(GtkButton *button, UserData *userData);
void on_back_clicked(GtkButton *button, UserData *userData);
void on_share_clicked(GtkButton *button, UserData *userData);
void home_show(UserData *userData);
void on_delete_clicked (GtkButton *button ,UserData* userData);

#endif //NETWORKPROGRAM_HOMECONTROLLER_H

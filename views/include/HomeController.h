//
// Created by bumman on 21/12/2021.
//

#ifndef NETWORKPROGRAM_HOMECONTROLLER_H
#define NETWORKPROGRAM_HOMECONTROLLER_H

#include "gtk/gtk.h"
#include "appScreen.h"

void show_home(UserData *userData);
void add_message(GtkWidget *message, UserData *userData);
void on_show_clicked(GtkButton *button, UserData *userData);

#endif //NETWORKPROGRAM_HOMECONTROLLER_H

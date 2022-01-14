//
// Created by bumman on 28/12/2021.
//

#ifndef NETWORKPROGRAM_SHOWCONTROLLER_H
#define NETWORKPROGRAM_SHOWCONTROLLER_H

#include "gtk/gtk.h"
#include "appScreen.h"
#include "appScreen.h"
#include "constant.h"
#include <sys/socket.h>
#include "hepler.h"
#include "constant.h"
#include "ShareController.h"
#include "handleClient.h"

void show_page_data(UserData *userData);
void on_back_home_clicked (GtkButton* button, UserData* userData);
void on_add_clicked(GtkButton* button, UserData* userData);

#endif //NETWORKPROGRAM_SHOWCONTROLLER_H

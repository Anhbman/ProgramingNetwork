//
// Created by bumman on 20/12/2021.
//

#ifndef PJLTM_APPSCREEN_H
#define PJLTM_APPSCREEN_H

//#include "gtk-3.0/gtk/gtk.h"
#include <gtk/gtk.h>


typedef struct{
    GtkWidget *window_login;
    GtkWidget *button_login;
    GtkWidget *entry_user;
    GtkWidget *entry_pass;

} LoginContainer;

typedef struct {
    GtkWidget *window_home;
    GtkWidget *scroll_place;
    GtkWidget *box_place;
    GtkWidget *label_home;
    GtkWidget *btn_show_home;
    GtkWidget *btn_addfriend_home;
    GtkWidget *btn_share_home;
    GtkWidget *label_name_home;

} HomeContainer;

typedef struct {
    LoginContainer loginContainer;
    HomeContainer homeContainer;
} ScreenApp;

typedef struct{
    ScreenApp *screenApp;
//    struct sockaddr_in serverAddr;
    int sockFd;
} UserData;

#endif //PJLTM_APPSCREEN_H

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
    GtkWidget *btn_back_home;
} HomeContainer;

typedef struct {
    GtkWidget *window_show;
    GtkWidget *scroll_show_place;
    GtkWidget *box_show_place;
    GtkWidget *entry_place;
    GtkWidget *menu_btn_cate;
    GtkWidget *btn_addplace;
    GtkWidget *btn_show_back;
} ShowContainer;

typedef struct {
    LoginContainer loginContainer;
    HomeContainer homeContainer;
    ShowContainer showContainer;
} ScreenApp;

typedef struct{
    ScreenApp *screenApp;
//    struct sockaddr_in serverAddr;
    int sockFd;
    int userID;
    char username[30];
} UserData;

#endif //PJLTM_APPSCREEN_H

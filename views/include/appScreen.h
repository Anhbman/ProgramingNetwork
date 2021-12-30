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
    GtkWidget *button_register;

} LoginContainer;
 typedef  struct {
     GtkWidget *window_register;
     GtkWidget *button_back;
     GtkWidget *button_register;
     GtkWidget *entry_username;
     GtkWidget *entry_password;
     GtkWidget *entry_password1;
 } RegisterContainer;
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
    GtkWidget *category_show;
    GtkWidget *btn_addplace;
    GtkWidget *btn_show_back;
    GtkWidget *message_add_place;
} ShowContainer;

typedef struct {
    GtkWidget *window_share;
    GtkWidget *fixed_main;
    GtkWidget *fixed_control;
    GtkWidget *btn_share_place;
    GtkWidget *label_message;
    GtkWidget *fixed_show_place;
    GtkWidget *scroll_place;
    GtkWidget *box_place;
    GtkWidget *fixed_friend;
    GtkWidget *scroll_friend;
    GtkWidget *box_plac;
    GtkWidget *btn_back_share;
} ShareContainer;
typedef struct  {
    GtkWidget *window_addFriend;
    GtkWidget *scroll_place;
    GtkWidget *fix_place;
    GtkWidget *fix_btn;
    GtkWidget *fix_main;
    GtkWidget *box_place;
    GtkWidget *btn_back;
    GtkWidget *btn_add;
    GtkWidget *entry_friendname;
    GtkWidget *label_result
} AddFriendContainer;
typedef struct {
    LoginContainer loginContainer;
    HomeContainer homeContainer;
    ShowContainer showContainer;
    ShareContainer shareContainer;
    RegisterContainer registerContainer;
    AddFriendContainer addFriendContainer;
} ScreenApp;

typedef struct{
    ScreenApp *screenApp;
//    struct sockaddr_in serverAddr;
    int sockFd;
    int userID;
    char username[30];
} UserData;

#endif //PJLTM_APPSCREEN_H

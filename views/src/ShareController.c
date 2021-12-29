//
// Created by bumman on 25/12/2021.
//

#include "ShareController.h"

static int status = 0;

void on_back_share_clicked(GtkButton* button, UserData* userData) {
    gtk_widget_hide(userData->screenApp->shareContainer.window_share);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
}

void share_show(UserData* userData) {
    if (status)
        return;
    share_show_place(userData);
    share_show_friend(userData);
    status = 1;
}

void share_show_place (UserData* userData) {

    printf("Share_show_place: \n");

    int senSize = send(userData->sockFd, SHARE_SHOW_PLACE, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    char* value = dataRecv(userData);
    char *token;
    token = strtok(value, "|");
    int check = 0;
    GtkWidget *radio2;
    while (token != NULL) {
        GtkWidget *radio1;
        if (check == 0) {
            radio2 = gtk_radio_button_new_with_label(NULL, token);
            add_message(radio2, userData->screenApp->shareContainer.box_place, userData);
            check = 1;
        } else {
            radio1 = gtk_radio_button_new_with_label_from_widget(
                    GTK_RADIO_BUTTON(radio2), token);
            add_message(radio1, userData->screenApp->shareContainer.box_place, userData);
        }
        token = strtok(NULL, "|");
    }

    free(value);
}

void share_show_friend (UserData* userData) {

    printf("Share_show_friend: \n");

//    int senSize = send(userData->sockFd, SHARE_SHOW_FRIEND, MAX_LEN_BUFF, 0);
//    if (senSize < 0)
//        perror("\nError: ");
//
//    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
//    if (senSize < 0)
//        perror("\nError: ");

    char* value = dataRecv(userData);
    char *token;
    token = strtok(value, "|");
    int check = 0;
    GtkWidget *radio2;
    while (token != NULL) {
        GtkWidget *radio1;
        if (check == 0) {
            radio2 = gtk_radio_button_new_with_label(NULL, token);
            add_message(radio2, userData->screenApp->shareContainer.box_friend, userData);
            check = 1;
        } else {
            radio1 = gtk_radio_button_new_with_label_from_widget(
                    GTK_RADIO_BUTTON(radio2), token);
            add_message(radio1, userData->screenApp->shareContainer.box_friend, userData);
        }
        token = strtok(NULL, "|");
    }

    free(value);
}
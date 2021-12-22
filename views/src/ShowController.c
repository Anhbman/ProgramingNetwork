//
// Created by bumman on 22/12/2021.
//

#include "ShowController.h"

void show_place (UserData *userData) {

    printf("Show_place\n");
    int senSize = send(userData->sockFd, SHOW_PLACE, 1, 0);
    if (senSize < 0)
        perror("\nshowPlace1 Error: ");

    senSize = send(userData->sockFd, userData->username, strlen(userData->username), 0);
    if (senSize < 0)
        perror("\nshowPlace2 Error: ");

    char* value;

    value = dataRecv(userData);

    char *token;
    token = strtok(value, "|");
    printf("token: %s", token);
    while (token != NULL) {
        GtkWidget *gtkLabel = gtk_label_new(token);
        gtk_widget_set_visible(gtkLabel, TRUE);
        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
        add_message(gtkLabel, userData->screenApp->showContainer.box_show_place, userData);
        token = strtok(NULL, "|");
    }

    free(value);
}

void on_click_back_show(UserData *userData) {

    printf("\nshow_back\n");
    gtk_widget_hide(userData->screenApp->showContainer.window_show);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
    home_show(userData);
}
//
// Created by bumman on 25/12/2021.
//

#include "ShareController.h"

void on_back_share_clicked(GtkButton* button, UserData* userData) {
    gtk_widget_hide(userData->screenApp->shareContainer.window_share);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
}

void share_show(UserData* userData) {

}

void share_show_place (UserData* userData) {
    int recvSize = 0;

    char recvData[MAX_LEN_BUFF];

    printf("Share_show_place: \n");

    int senSize = send(userData->sockFd, SHARE_SHOW_PLACE, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    char *value = dataRecv(userData);

    char *token;

    token = strtok(value, "|");

    while (token != NULL) {
        GtkWidget *gtkLabel = gtk_check_button_new_with_label(token);
        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_CHECK_BUTTON(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_CHECK_BUTTON(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_CHECK_BUTTON(gtkLabel),TRUE);
        add_message(gtkLabel, userData->screenApp->shareContainer.box_place, userData);
        token = strtok(NULL, "|");
    }
}
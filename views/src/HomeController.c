//
// Created by bumman on 21/12/2021.
//

#include "HomeController.h"

void on_show_clicked(GtkButton *button, UserData *userData) {
    printf("btn_show\n");
    show_page_data(userData);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->showContainer.window_show);
}

void on_back_clicked(GtkButton *button, UserData *userData) {
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
    remove_all_box_child(userData->screenApp->homeContainer.box_place);
}

void on_share_clicked(GtkButton *button, UserData *userData) {
//    share_show(userData);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->shareContainer.window_share);
}

void home_show(UserData *userData) {

//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");


    while (1) {
        int tmp = 0;
        char* value;
        value = dataRecv(userData);
        if (strcmp(value, SEND_END) == 0) {
            free(value);
            break;
        }
        char *token;

        token = strtok(value, "|");

        GtkWidget *radio2;
        while (token != NULL) {
            GtkWidget *check;

            if (tmp == 0) {
                add_message(gtk_label_new(token), userData->screenApp->homeContainer.box_place, userData);
                tmp++;
            } else {
                /* --- Get the check button --- */
                check = gtk_check_button_new_with_label(token);
                add_message(check, userData->screenApp->homeContainer.box_place, userData);
            }
            token = strtok(NULL, "|");
        }
    }
}
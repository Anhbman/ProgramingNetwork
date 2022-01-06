//
// Created by bumman on 21/12/2021.
//

#include "HomeController.h"

void on_show_clicked(GtkButton *button, UserData *userData) {
    printf("btn_show\n");
    if (!userData->screenApp->showContainer.window_show) {
        printf("NULL\n");
    }
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->showContainer.window_show);
//    show_place(userData);
}

void home_show(UserData *userData) {

    int recvSize = 0;

    char recvData[MAX_LEN_BUFF];


//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    while (1) {
        int tmp = 0;
        char* value;
        value = dataRecv(userData);
        if (strcmp(value,SEND_END) == 0) {
            free(value);
            break;
        }
        char *token;

        token = strtok(value, "|");

        while (token != NULL) {
//        GtkWidget *gtkLabel = gtk_label_new(token);
//        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//        add_message(gtkLabel, userData->screenApp->homeContainer.box_place, userData);
//        token = strtok(NULL, "|");
            GtkWidget *check;


                /* --- Get the check button --- */
                check = gtk_check_button_new_with_label(token);
                add_message(check, userData->screenApp->homeContainer.box_place, userData);
            //}
            token = strtok(NULL, "|");

        }

    }

}

void on_back_clicked(GtkButton *button, UserData *userData) {
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
}

void on_share_clicked(GtkButton *button, UserData *userData) {
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->shareContainer.window_share);
    share_show_place(userData);
}
void on_addFriend_home_clicked(GtkButton * button, UserData *userData) {
    showFriendList(userData);
    showUserList(userData);
    gtk_label_set_text(userData->screenApp->addFriendContainer.label_name,userData->username);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->addFriendContainer.window_addFriend);
}

//
// Created by bumman on 21/12/2021.
//

#include "HomeController.h"
#include "gtk/gtk.h"
#include "appScreen.h"
#include "constant.h"
#include <sys/socket.h>
#include "hepler.h"
#include "constant.h"
#include "ShowController.h"

void on_show_clicked(GtkButton *button, UserData *userData) {
    printf("btn_show");
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->showContainer.window_show);
    show_place(userData);
}

void home_show(UserData *userData) {

    int recvSize = 0;

    char recvData[MAX_LEN_BUFF];


//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, 1, 0);
    if (senSize < 0)
        perror("\nError: ");

    char* value;
    value = dataRecv(userData);
    char *token;

    token = strtok(value, "|");

    while (token != NULL) {
        GtkWidget *gtkLabel = gtk_label_new(token);
        gtk_widget_set_visible(gtkLabel, TRUE);
        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
        add_message(gtkLabel, userData->screenApp->homeContainer.box_place, userData);
        token = strtok(NULL, "|");
    }

    free(value);
    //printf("recv2: %s\n",value[i]);

}

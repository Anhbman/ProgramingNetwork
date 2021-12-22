//
// Created by bumman on 21/12/2021.
//

#include "HomeController.h"
#include "gtk/gtk.h"
#include "appScreen.h"
#include "constant.h"
#include <sys/socket.h>


void on_show_clicked(GtkButton *button, UserData *userData) {

}

void add_message(GtkWidget *message, UserData *userData) {
    GtkWidget *box = userData->screenApp->homeContainer.box_place;
    gtk_box_pack_start(GTK_BOX(box), message, FALSE, FALSE, 0);
}


char* dataRecv(UserData *userData) {

    int recvSize = 0;

    char* recvData = (char *)malloc(sizeof (char )*MAX_LEN_BUFF);

    recvSize = recv(userData->sockFd, recvData, MAX_LEN_BUFF, 0); /* echo to the client */
    if (recvSize < 0)
        perror("\nError ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
   recvData[recvSize] = '\0';
    printf("recvSize: %d\nrecv1: %s\n",recvSize, recvData);

    return recvData;
}

void show_home(UserData *userData) {

    int recvSize = 0;

    char recvData[MAX_LEN_BUFF];

//    Test n = 5

    send(userData->sockFd,"ok",2,0);
    char *value = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);

    for (int i = 0; i < 5; ++i) {
        memset(value,0,MAX_LEN_BUFF);
        value = dataRecv(userData);
        printf("%s\n",value);
    }


//    recvSize = recv(userData->sockFd, recvData, 100, 0);
//    if (recvSize < 0)
//        perror("\nError: ");
//    else if (recvSize == 0)
//        printf("Connection closed.\n");
//    recvData[recvSize] = '\0';

    int n = atoi(recvData);

//    test dung
//    printf("Show_home: \n");
//    char* value;
//    value = dataRecv(userData);
//    char *token;
//
//    token = strtok(value, "|");
//    GtkWidget *gtkLabel = gtk_label_new(token);
//    gtk_widget_set_visible(gtkLabel, TRUE);
//    gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//    gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//    gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//    gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//    add_message(gtkLabel,userData);
//
//    while (token != NULL) {
//        token = strtok(NULL, "|");
//        GtkWidget *gtkLabel = gtk_label_new(token);
//        gtk_widget_set_visible(gtkLabel, TRUE);
//        gtk_label_set_xalign(GTK_LABEL(gtkLabel), 1);
//        gtk_widget_set_halign(gtkLabel, GTK_ALIGN_START);
//        gtk_label_set_max_width_chars(GTK_LABEL(gtkLabel), 30);
//        gtk_label_set_line_wrap(GTK_LABEL(gtkLabel),TRUE);
//        add_message(gtkLabel,userData);
//    }

    free(value);
    //printf("recv2: %s\n",value[i]);

}

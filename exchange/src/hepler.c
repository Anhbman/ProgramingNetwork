//
// Created by bumman on 22/12/2021.
//

#include "hepler.h"

void add_message(GtkWidget *message, GtkWidget *addBox, UserData *userData) {
    GtkWidget *box = addBox;
    gtk_box_pack_start(GTK_BOX(box), message, FALSE, FALSE, 0);
}

char* dataRecv(UserData *userData) {

    int recvSize = 0;

    char* recvData = (char *)malloc(sizeof (char )*MAX_LEN_BUFF);
//    char* recvData ;

    recvSize = recv(userData->sockFd, recvData, MAX_LEN_BUFF, 0); /* echo to the client */
    if (recvSize < 0)
        perror("\nError ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';
    printf("recvSize: %d\nrecv1: %s\n",recvSize, recvData);

    return recvData;
}


void remove_all_box_child (GtkWidget* box) {
    GList *children, *iter;

    children = gtk_container_get_children(GTK_CONTAINER(box));
    for(iter = children; iter != NULL; iter = g_list_next(iter))
        gtk_widget_destroy(GTK_WIDGET(iter->data));
    g_list_free(children);
}

GList* get_child_box (UserData *userData) {
    GList* list = gtk_container_get_children (GTK_CONTAINER (userData->screenApp->homeContainer.box_place));
    return list;
}

void convertString (char *nameFrienf, char *namePlace) {
    int k = 0;

    int m = 0;

    for (int i = 0; i < strlen(nameFrienf); ++i) {
        char ch = nameFrienf[i];

        if (ch == '<') {
            m = 1;
            break;
        }
        namePlace[i] = ch;
        k++;
    }

    namePlace[k - m] = 0;
}

void show_error(GtkWidget *widget, gpointer window, char* message) {
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(GTK_WINDOW(window),
                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                    GTK_MESSAGE_ERROR,
                                    GTK_BUTTONS_OK,
                                    message);
    gtk_window_set_title(GTK_WINDOW(dialog), "Error");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

void show_info(GtkWidget *widget, gpointer window, char* message) {

    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(GTK_WINDOW(window),
                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                    GTK_MESSAGE_INFO,
                                    GTK_BUTTONS_OK,
                                    message);
    gtk_window_set_title(GTK_WINDOW(dialog), "Information");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}
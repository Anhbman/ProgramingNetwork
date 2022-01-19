//
// Created by bumman on 25/12/2021.
//

#include "ShareController.h"

static int status = 0;

void on_back_share_clicked(GtkButton* button, UserData* userData) {
    gtk_widget_hide(userData->screenApp->shareContainer.window_share);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
    remove_all_box_child(userData->screenApp->shareContainer.box_friend);
    remove_all_box_child(userData->screenApp->shareContainer.box_place);
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
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    printf(" name = %s\n",userData->username);

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
                add_message(gtk_label_new(token), userData->screenApp->shareContainer.box_place, userData);
                tmp++;
            } else {
                /* --- Get the check button --- */
                check = gtk_check_button_new_with_label(token);
                add_message(check, userData->screenApp->shareContainer.box_place, userData);
            }
            token = strtok(NULL, "|");
        }
    }

}

void share_show_friend (UserData* userData) {
    int recvSize = 0;
    int sendSize = 0;
    char recvData[MAX_LEN_BUFF];
    sendSize = send(userData->sockFd,SHOW_FRIEND_LIST,MAX_LEN_BUFF,0);
    if (sendSize < 0)
        perror("\nError:");
    sendSize = send(userData->sockFd,userData->username, MAX_LEN_BUFF, 0);
    if (sendSize < 0)
        perror("\nError: ");

    int tmp = 0;
    char* value;
    value = dataRecv(userData);

    char *token;

    token = strtok(value, "|");

    while (token != NULL) {
        GtkWidget *check;

        /* --- Get the check button --- */
        check = gtk_check_button_new_with_label(token);
        add_message(check, userData->screenApp->shareContainer.box_friend, userData);
        //}
        token = strtok(NULL, "|");

    }

}
void on_share_place_clicked(GtkButton* button,UserData* userData) {

    int check = 1;
    printf("Share Click\n");
    GList *children, *iter, *iter2, *children1;
    char name1[MAX_LEN_BUFF];
    char *cate = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->shareContainer.box_place));
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                char* name = gtk_button_get_label(child);
                printf("%s\n",name);
                strcpy(name1, name);
                break;
                // gtk_widget_destroy(child);
            }
        } else {
            bzero(cate,MAX_LEN_BUFF);
            strcpy(cate, gtk_label_get_text(child));
        }
    }
    printf("name2 %s\n",name1);

    char name2[MAX_LEN_BUFF];
    children1 = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->shareContainer.box_friend));
    for(iter2 = children1; iter2 != NULL; iter2 = g_list_next(iter2)){
        GtkWidget *child = iter2->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                strcpy(name2, gtk_button_get_label(child));
                // gtk_widget_destroy(child);
            }

        }
    }
    printf("%s\n",name2);


    char sendString[MAX_LEN_BUFF];
    sprintf(sendString,"%s|%s|%s|%s",userData->username,name1,cate,name2);
//    sprintf(sendString,"%s|%s",userData->username,name1);

    printf("%s\n",sendString);
    int status = sharePlace(sendString,userData->sockFd);
    printf("%d\n",status);
    if (status == 1) {
        gtk_label_set_text(userData->screenApp->shareContainer.label_message,"Successfully");
    } else if (status == 2) {
        gtk_label_set_text(userData->screenApp->shareContainer.label_message,"Place already exist");
    } else
    {
        gtk_label_set_text(userData->screenApp->shareContainer.label_message,"Failed");
    }
}
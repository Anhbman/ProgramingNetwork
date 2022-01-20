//
// Created by bumman on 25/12/2021.
//

#include "ShareController.h"

static int status = 0;

void on_back_share_clicked(GtkButton* button, UserData* userData) {
    gtk_widget_hide(userData->screenApp->shareContainer.window_share);
    home_show(userData);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
    remove_all_box_child(userData->screenApp->shareContainer.box_friend);
    remove_all_box_child(userData->screenApp->shareContainer.box_place);
}


void share_show_place (UserData* userData) {

    printf("Share_show_place: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
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
                add_message(gtk_label_new(token), userData->screenApp->shareContainer.box_place, userData);
                tmp++;
            } else {
                /* --- Get the check button --- */
                check = gtk_check_button_new_with_label(token);
                add_message(check, userData->screenApp->shareContainer.box_place, userData);
            }
            token = strtok(NULL, "|");
        }
        free(value);
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
    free(value);

}
void on_share_place_clicked(GtkButton* button,UserData* userData) {

    int check = 0;
    int check1 = 0;
    printf("Share Click\n");
    GList *children, *iter, *iter2, *children1;
    char* name1 = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    char *cate = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->shareContainer.box_place));
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                convertString(gtk_button_get_label(child),name1);
                printf("Nameplace: %s\n",name1);
                check++;
                break;
            }
        } else {
            bzero(cate,MAX_LEN_BUFF);
            strcpy(cate, gtk_label_get_text(child));
        }
    }
    char name2[MAX_LEN_BUFF];
    children1 = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->shareContainer.box_friend));
    for(iter2 = children1; iter2 != NULL; iter2 = g_list_next(iter2)){
        GtkWidget *child = iter2->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                check1++;
                strcpy(name2, gtk_button_get_label(child));
                // gtk_widget_destroy(child);
            }

        }
    }
    printf("%s\n",name2);


    char sendString[MAX_LEN_BUFF];
    sprintf(sendString,"%s|%s|%s|%s",userData->username,name1,cate,name2);
    free(name1);
    if (check1 == 1 && check1 == 1) {
        int status = sharePlace(sendString,userData->sockFd);
        if (status == 1) {
            show_info(userData->screenApp->shareContainer.window_share,userData->screenApp->shareContainer.window_share,"Share successfully!");
        } else if (status == 2) {
            show_error(userData->screenApp->shareContainer.window_share,userData->screenApp->shareContainer.window_share,"Place already exist");
        } else
        {
            show_error(userData->screenApp->shareContainer.window_share,userData->screenApp->shareContainer.window_share,"Share Failed");
        }
    } else {
        show_error(userData->screenApp->shareContainer.window_share,userData->screenApp->shareContainer.window_share,"Please select place and friend name");
    }
}
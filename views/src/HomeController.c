//
// Created by bumman on 21/12/2021.
//

#include "HomeController.h"

void on_show_clicked(GtkButton *button, UserData *userData) {
    printf("btn_show\n");
    show_page_data(userData);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->showContainer.window_show);
    remove_all_box_child(userData->screenApp->homeContainer.box_place);
}

void on_back_clicked(GtkButton *button, UserData *userData) {
    remove_all_box_child(userData->screenApp->homeContainer.box_place);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
}

void on_share_clicked(GtkButton *button, UserData *userData) {
    share_show_place(userData);
    showFriendList(userData);
    share_show_friend(userData);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->shareContainer.window_share);
    remove_all_box_child(userData->screenApp->homeContainer.box_place);
}

void home_show(UserData *userData) {

//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    senSize = send(userData->sockFd, userData->username, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    gtk_label_set_text(userData->screenApp->homeContainer.label_username,userData->username);
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

void on_backup_clicked (GtkButton *button, UserData* userData) {
    int sendbytes;

    sendbytes = send(userData->sockFd,BACKUP,MAX_LEN_BUFF,0);
    if (sendbytes < 0)
        perror("ERROR backup");

    sendbytes = send(userData->sockFd,userData->username,MAX_LEN_BUFF,0);
    if (sendbytes < 0)
        perror("ERROR backup");

}

void on_restore_clicked (GtkButton *button, UserData* userData) {
    int sendbytes;

    sendbytes = send(userData->sockFd,RESTORE,MAX_LEN_BUFF,0);
    if (sendbytes < 0)
        perror("ERROR restore");

    sendbytes = send(userData->sockFd,userData->username,MAX_LEN_BUFF,0);
    if (sendbytes < 0)
        perror("ERROR restore");
    remove_all_box_child(userData->screenApp->homeContainer.box_place);
    home_show(userData);

    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
}


void on_addFriend_home_clicked(GtkButton * button, UserData *userData) {

    printf("add friend\n");
    showFriendList(userData);
    printf("hehe\n");
    showUserList(userData);
    gtk_label_set_text(userData->screenApp->addFriendContainer.label_result," ");
    gtk_label_set_text(userData->screenApp->addFriendContainer.label_name,userData->username);
    gtk_widget_hide(userData->screenApp->homeContainer.window_home);
    gtk_widget_show_all(userData->screenApp->addFriendContainer.window_addFriend);
    //remove_all_box_child(userData->screenApp->homeContainer.box_place);
}
void on_delete_clicked (GtkButton *button ,UserData* userData) {

    printf("delete home\n");
    GList *children, *iter;

    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->homeContainer.box_place));
    printf("delete home\n");
    char* cate = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                char* name = (char *) malloc(sizeof (char )*MAX_LEN_BUFF);
                convertString(gtk_button_get_label(child), name);
                printf("Name: %s\n",name);
                if (remove_place(userData,name, cate)) {
                    printf("haah");
                    gtk_widget_destroy(child);
                }
                free(name);
            }
        } else {
            bzero(cate,MAX_LEN_BUFF);
            strcpy(cate, gtk_label_get_text(child));
        }
    }
    free(cate);
    return;
}

//
// Created by bumman on 28/12/2021.
//

#include "ShowController.h"

void on_back_home_clicked (GtkButton* button, UserData* userData) {
    home_show(userData);
    gtk_widget_hide(userData->screenApp->showContainer.window_show);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
    remove_all_box_child(userData->screenApp->showContainer.box_place);
    gtk_entry_set_text(userData->screenApp->showContainer.entry_place,"");
}


void on_add_clicked(GtkButton* button, UserData* userData) {

    printf("clicked button add\n");
    int check = 0;
    int check1 = 0;

    char * placeName = (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->showContainer.entry_place));
    char * category = (char *) gtk_combo_box_text_get_active_text(userData->screenApp->showContainer.combo_cate);

    if (strlen(placeName) != 0) {
        if (add_place(userData->username,placeName, category, userData->sockFd)) {
            show_info(userData->screenApp->showContainer.window_show,userData->screenApp->showContainer.window_show, "Add place success!");
        } else {
            check = 1;
            show_error(userData->screenApp->showContainer.window_show,userData->screenApp->showContainer.window_show, "Add place error!");
        }
    }



    GList *children, *iter;

    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->showContainer.box_place));
    printf("Show add\n");
    char cate[20] = {0};
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;

        if (!GTK_IS_CHECK_BUTTON(child)) {
            bzero(cate,20);
            strcpy(cate, gtk_label_get_text(child));
        } else {
            if (gtk_toggle_button_get_active(child)){
                char* name = gtk_button_get_label(child);
                if (add_place(userData->username,name,cate,userData->sockFd)) {
                    gtk_widget_destroy(child);
                } else {
                    check1 = 1;
                }
            }

        }
    }

}

void show_page_data(UserData *userData) {

//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, SHOW_PLACE, MAX_LEN_BUFF, 0);
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

        while (token != NULL) {
            GtkWidget *check;

            if (tmp == 0) {
                add_message(gtk_label_new(token), userData->screenApp->showContainer.box_place, userData);
                tmp++;
            } else {
                /* --- Get the check button --- */
                check = gtk_check_button_new_with_label(token);
                add_message(check, userData->screenApp->showContainer.box_place, userData);
            }
            token = strtok(NULL, "|");
        }
    }
}
//
// Created by bumman on 28/12/2021.
//

#include "ShowController.h"

void on_back_home_clicked (GtkButton* button, UserData* userData) {
    gtk_widget_hide(userData->screenApp->showContainer.window_show);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
}

void home_show(UserData *userData) {

//    test dung
    printf("Show_home: \n");

    int senSize = send(userData->sockFd, HOME_SHOW, MAX_LEN_BUFF, 0);
    if (senSize < 0)
        perror("\nError: ");

    char* value;
    value = dataRecv(userData);
    char *token;

    token = strtok(value, "|");

    int check = 0;
    GtkWidget *radio2;
    while (token != NULL) {
        GtkWidget *radio1;
        if (check == 0) {
            radio2 = gtk_radio_button_new_with_label(NULL, token);
            add_message(radio2, userData->screenApp->showContainer.box_place, userData);
            check = 1;
        } else {
            radio1 = gtk_radio_button_new_with_label_from_widget(
                    GTK_RADIO_BUTTON(radio2), token);
            add_message(radio1, userData->screenApp->showContainer.box_place, userData);
        }
        token = strtok(NULL, "|");
    }

    free(value);
}

void on_add_clicked(GtkButton* button, UserData* userData) {

    char * placeName = (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->showContainer.entry_place));
    char * category = (char *) gtk_combo_box_get_active_id(userData->screenApp->showContainer.combo_cate);

    printf("placeName: %s\n", placeName);

    if (add_place(userData->username,placeName, category, userData->sockFd)) {
        gtk_label_set_text(userData->screenApp->showContainer.message_show, "successfully");
    } else {
        gtk_label_set_text(userData->screenApp->showContainer.message_show, "error");
    }
}

//
// Created by bumman on 20/12/2021.
//

#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"
#include "LoginController.h"
#include "HomeController.h"

void on_login_clicked(GtkButton *button, UserData *userData) {

    char* username =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->loginContainer.entry_user));
    char* pass =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->loginContainer.entry_pass));

    char user[MAX_LEN_BUFF];
    int check = 0;

    sprintf(user, "%s|%s",username,pass);
    printf("%s\n",user);
    if (userData->username) {
        check = 1;
    }
    int status = loginUser(user,userData->sockFd);
    printf("status %d\n",status);
    if (status) {
        strcpy(userData->username,username);
        home_show(userData);
        printf("login ok\n");
        gtk_widget_hide(userData->screenApp->loginContainer.window_login);
        gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
        gtk_entry_set_text(userData->screenApp->loginContainer.entry_user,"");
        gtk_entry_set_text(userData->screenApp->loginContainer.entry_pass,"");
//        show_error(userData->screenApp->homeContainer.window_home,userData->screenApp->homeContainer.window_home);
    }

    return;
}
void on_register_clicked(GtkButton *button,UserData *userData) {
    gtk_label_set_text(userData->screenApp->registerContainer.label_status,"");
    gtk_widget_hide(userData->screenApp->loginContainer.window_login);
    gtk_widget_show_all(userData->screenApp->registerContainer.window_register);
}
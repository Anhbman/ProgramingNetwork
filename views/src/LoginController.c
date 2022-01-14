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

    sprintf(user, "user_name = '%s' and password = '%s'",username,pass);
    printf("%s\n",user);
    if (userData->username) {
        check = 1;
    }
    int status = loginUser(user,userData->sockFd);
    printf("status %d\n",status);
    if (status) {
        strcpy(userData->username,username);
        home_show(userData);
        gtk_widget_hide(userData->screenApp->loginContainer.window_login);
        gtk_widget_show_all(userData->screenApp->homeContainer.window_home);

//        show_error(userData->screenApp->homeContainer.window_home,userData->screenApp->homeContainer.window_home);
    }

    return;
}
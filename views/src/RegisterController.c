#include "RegisterController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"

void on_back_register_clicked(GtkButton *button, UserData *userData){
    gtk_widget_hide(userData->screenApp->registerContainer.window_register);
    gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
}
void on_register_btn_clicked(GtkButton *button,UserData *userData) {
    char* username =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_username));
    char* pass =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_password));
    char * pass1 = (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_password1));
    char user[MAX_LEN_BUFF];
    if (strcmp(pass,pass1) != 0) {
        printf("Password not match\n");
    } else {
        sprintf(user,"%s|%s",username,pass);
        printf("%s\n",user);
        int status = registerUser(user,userData->sockFd);
        if (status) {
            gtk_widget_hide(userData->screenApp->registerContainer.window_register);
            gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
        }
    }

//    sprintf(user, "user_name = '%s' and password = '%s'",username,pass);
//    printf("%s\n",user);
//    if (userData->username) {
//        check = 1;
//    }
//    int status = loginUser(user,userData->sockFd);
//    printf("status %d\n",status);
//    if (status) {
//        gtk_widget_hide(userData->screenApp->loginContainer.window_login);
//        gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
//        if (!check)
//            home_show(userData);
//        strcpy(userData->username,username);
//    }
}

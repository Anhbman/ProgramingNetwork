#include "RegisterController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"

void on_back_register_clicked(GtkButton *button, UserData *userData){
    gtk_widget_hide(userData->screenApp->registerContainer.window_register);
    gtk_widget_show_all(userData->screenApp->loginContainer.window_login);
    gtk_entry_set_text(userData->screenApp->registerContainer.entry_password,"");
    gtk_entry_set_text(userData->screenApp->registerContainer.entry_username,"");
    gtk_entry_set_text(userData->screenApp->registerContainer.entry_password1,"");
}
void on_register_btn_clicked(GtkButton *button,UserData *userData) {
    char* username =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_username));
    char* pass =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_password));
    char * pass1 = (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->registerContainer.entry_password1));
    char user[MAX_LEN_BUFF];
    if (strcmp(pass,pass1) != 0) {
        show_error(userData->screenApp->registerContainer.window_register,userData->screenApp->registerContainer.window_register,"Password not match");
    } else if (strcmp(username,"") != 0) {
        sprintf(user,"%s|%s",username,pass);
        printf("%s\n",user);
        int status = registerUser(user,userData->sockFd);
        if (status == 1) {
            show_info(userData->screenApp->registerContainer.window_register,userData->screenApp->registerContainer.window_register,"Register successfully");
        }
        else if (status == 2) {
            show_error(userData->screenApp->registerContainer.window_register,userData->screenApp->registerContainer.window_register,"User exist");
        } else {
            show_error(userData->screenApp->registerContainer.window_register,userData->screenApp->registerContainer.window_register,"Register failed");
        }
    } else {
        show_error(userData->screenApp->registerContainer.window_register,userData->screenApp->registerContainer.window_register,"Please enter infor");
    }

}


#include "AddFriendController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"
void on_back_addFriend_clicked(GtkButton* button,UserData* userData) {
    gtk_widget_hide(userData->screenApp->addFriendContainer.window_addFriend);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
}
void  on_add_addFriend_clicked(GtkButton* button,UserData* userData) {
    char* friendname =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->addFriendContainer.entry_friendname));
    char sendString[MAX_LEN_BUFF];
    sprintf(sendString,"%s|%s",userData->username,friendname);
    printf("%s\n",sendString);
    int status = addFriend(sendString,userData->sockFd);
    printf("%d\n",status);
    if (status == 1) {
        gtk_label_set_text(userData->screenApp->addFriendContainer.label_result,"Successfully");
    } else {
        gtk_label_set_text(userData->screenApp->addFriendContainer.label_result,"Failed");
    }
}
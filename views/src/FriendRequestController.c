#include "FriendRequestController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"
void on_back_friendRequest_clicked(GtkButton *button,UserData *userData) {
    showFriendList(userData);
    showUserList(userData);
    gtk_widget_hide(userData->screenApp->friendRequestContainer.window_friendRequest);
    gtk_widget_show_all(userData->screenApp->addFriendContainer.window_addFriend);
}
void on_accept_friendRequest_clicked(GtkButton *button,UserData *userData) {
    printf("Accept Request\n");
    GList *children, *iter;
    GtkCheckButton a;

    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->friendRequestContainer.box_place));
    //printf("delete home\n");
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                char* name = gtk_button_get_label(child);
                char String[MAX_LEN_BUFF];
                sprintf(String,"%s|%s",userData->username,name);
                printf("%s\n",String);
                if (acceptFriend(String,userData->sockFd)) {
                    gtk_label_set_text(userData->screenApp->friendRequestContainer.label_name,"Successfully");
                    gtk_widget_destroy(child);
                } else {
                    gtk_label_set_text(userData->screenApp->friendRequestContainer.label_name,"Failed");
                }
            }

        }
    }
}
void on_delete_friendRequest_clicked(GtkButton *button,UserData *userData) {

}

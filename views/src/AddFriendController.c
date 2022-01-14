#include "AddFriendController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"
void on_back_addFriend_clicked(GtkButton* button,UserData* userData) {
    gtk_widget_hide(userData->screenApp->addFriendContainer.window_addFriend);
    gtk_widget_show_all(userData->screenApp->homeContainer.window_home);
    remove_all_box_child(userData->screenApp->addFriendContainer.box_place2);
    remove_all_box_child(userData->screenApp->addFriendContainer.box_place1);
}
void  on_add_addFriend_clicked(GtkButton* button,UserData* userData) {
    GList *children, *iter;
    GtkCheckButton a;
    char name[MAX_LEN_BUFF];
    children = gtk_container_get_children(GTK_CONTAINER(userData->screenApp->addFriendContainer.box_place2));
    printf("Add friend\n");
    for(iter = children; iter != NULL; iter = g_list_next(iter)){
        GtkWidget *child = iter->data;
      //  printf("%s\n", gtk_button_get_label(child));
        if (GTK_IS_CHECK_BUTTON(child)){
            if (gtk_toggle_button_get_active(child)){
                char* name1 = gtk_button_get_label(child);
                printf("%s\n",name1);
                strcpy(name, gtk_button_get_label(child));
               // gtk_widget_destroy(child);
            }

        }
    }
    printf("%s\n",name);
    char friendname[MAX_LEN_BUFF];
    strcpy(friendname, gtk_entry_get_text(GTK_ENTRY(userData->screenApp->addFriendContainer.entry_friendname)));
    //char* friendname =  (char *) gtk_entry_get_text(GTK_ENTRY(userData->screenApp->addFriendContainer.entry_friendname));
    if (strcmp(friendname,"") == 0) {
        strcpy(friendname,name);
    }

    char sendString[MAX_LEN_BUFF];
    sprintf(sendString,"%s|%s",userData->username,friendname);
    printf("%s\n",sendString);
    int status = addFriend(sendString,userData->sockFd);
    printf("%d\n",status);
    if (status == 1) {
        gtk_label_set_text(userData->screenApp->addFriendContainer.label_result,"Successfully");
    } else if (status == 2){
        gtk_label_set_text(userData->screenApp->addFriendContainer.label_result,"Waiting acception");
    } else
    {
        gtk_label_set_text(userData->screenApp->addFriendContainer.label_result,"Failed");
    }
}
void on_see_friendRequest_clicked(GtkButton* button,UserData* userData) {
    showFriendRequest(userData);
    gtk_widget_hide(userData->screenApp->addFriendContainer.window_addFriend);
    gtk_widget_show_all(userData->screenApp->friendRequestContainer.window_friendRequest);
    remove_all_box_child(userData->screenApp->addFriendContainer.box_place2);
    remove_all_box_child(userData->screenApp->addFriendContainer.box_place1);

}
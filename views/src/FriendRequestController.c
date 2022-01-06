#include "FriendRequestController.h"
#include "handleClient.h"
#include "appScreen.h"
#include "string.h"
#include "constant.h"
#include "gtk/gtk.h"
void on_back_friendRequest_clicked(GtkButton *button,UserData *userData) {
    gtk_widget_hide(userData->screenApp->friendRequestContainer.window_friendRequest);
    gtk_widget_show_all(userData->screenApp->addFriendContainer.window_addFriend);
}

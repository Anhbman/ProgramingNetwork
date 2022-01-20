//
// Created by bumman on 20/12/2021.
//

#include "initScreen.h"
#include "LoginController.h"
#include "HomeController.h"
#include "ShowController.h"
#include "ShareController.h"
#include "RegisterController.h"
#include "AddFriendController.h"
#include "FriendRequestController.h"
#include "styleScreen.h"
#include <gtk/gtk.h>


void initLoginScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/login.glade");

    userData->screenApp->loginContainer.window_login = (GtkWidget *) gtk_builder_get_object(builder, "window_login");
    userData->screenApp->loginContainer.button_login = (GtkWidget *) gtk_builder_get_object(builder, "button_login");
    userData->screenApp->loginContainer.entry_user = (GtkWidget *) gtk_builder_get_object(builder, "entry_user");
    userData->screenApp->loginContainer.entry_pass = (GtkWidget *) gtk_builder_get_object(builder, "entry_pass");
    userData->screenApp->loginContainer.button_register = (GtkWidget *) gtk_builder_get_object(builder, "button_register");

    userData->screenApp->loginContainer.img_avatar = (GtkWidget *) gtk_builder_get_object(builder,"img_avatar");
    GtkCssProvider *provider_login = gtk_css_provider_new();

    gtk_css_provider_load_from_path(provider_login,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);
    css_set(provider_login, (GtkWidget *) userData->screenApp->loginContainer.window_login);
    css_set(provider_login, (GtkWidget *) userData->screenApp->loginContainer.button_login);
    css_set(provider_login, (GtkWidget *) userData->screenApp->loginContainer.entry_user);
    css_set(provider_login, (GtkWidget *) userData->screenApp->loginContainer.entry_pass);
    css_set(provider_login, (GtkWidget *) userData->screenApp->loginContainer.button_register);
    css_set(provider_login,(GtkWidget *) userData->screenApp->loginContainer.img_avatar);



//    g_signal_connect(userData->screenApp->loginContainer.window_login, "destroy", G_CALLBACK(gtk_main_quit()));
    g_signal_connect(userData->screenApp->loginContainer.button_login, "clicked",G_CALLBACK(on_login_clicked), userData);
    g_signal_connect(userData->screenApp->loginContainer.button_register, "clicked",G_CALLBACK(on_register_clicked),userData);
}
void initRegisterScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/register.glade");
    userData->screenApp->registerContainer.window_register = (GtkWidget *) gtk_builder_get_object(builder, "window_register");
    userData->screenApp->registerContainer.button_back = (GtkWidget *) gtk_builder_get_object(builder, "button_back");
    userData->screenApp->registerContainer.button_register = (GtkWidget *) gtk_builder_get_object(builder, "button_register");
    userData->screenApp->registerContainer.entry_username = (GtkWidget *) gtk_builder_get_object(builder, "entry_username");
    userData->screenApp->registerContainer.entry_password = (GtkWidget *) gtk_builder_get_object(builder, "entry_password");
    userData->screenApp->registerContainer.entry_password1 = (GtkWidget *) gtk_builder_get_object(builder, "entry_password1");
    userData->screenApp->registerContainer.label_status = (GtkWidget *) gtk_builder_get_object(builder, "label_status");
    userData->screenApp->registerContainer.img_avatar = (GtkWidget *) gtk_builder_get_object(builder, "img_avatar");
    GtkCssProvider *provider_register = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_register,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.button_register);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.button_back);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.window_register);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.entry_password1);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.entry_password);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.label_status);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.entry_username);
    css_set(provider_register,(GtkWidget *) userData->screenApp->registerContainer.img_avatar);
    g_signal_connect(userData->screenApp->registerContainer.button_register,"clicked",G_CALLBACK(on_register_btn_clicked),userData);
    g_signal_connect(userData->screenApp->registerContainer.button_back,"clicked",G_CALLBACK(on_back_register_clicked),userData);
}
void initShowScreen(UserData* userData) {
    printf("start inti Show\n");
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/show1.glade");

    userData->screenApp->showContainer.window_show = (GtkWidget *) gtk_builder_get_object(builder, "window_show");
    userData->screenApp->showContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder, "box_place");
    userData->screenApp->showContainer.entry_place = (GtkWidget *) gtk_builder_get_object(builder, "entry_place");
    userData->screenApp->showContainer.btn_add_place = (GtkWidget *) gtk_builder_get_object(builder, "btn_add_place");
    userData->screenApp->showContainer.combo_cate = (GtkWidget *) gtk_builder_get_object(builder, "combo_cate");
    userData->screenApp->showContainer.message_show = (GtkWidget *) gtk_builder_get_object(builder, "message_show");
    userData->screenApp->showContainer.btn_show_back = (GtkWidget *) gtk_builder_get_object(builder , "btn_show_back");

    GtkCssProvider *provider_show = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_show,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.btn_add_place);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.btn_show_back);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.box_place);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.combo_cate);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.entry_place);
    css_set(provider_show,(GtkWidget *) userData->screenApp->showContainer.window_show);
    g_signal_connect(userData->screenApp->showContainer.btn_show_back, "clicked", G_CALLBACK(on_back_home_clicked), userData);
    g_signal_connect(userData->screenApp->showContainer.btn_add_place, "clicked", G_CALLBACK(on_add_clicked), userData);
    printf("show done\n");
}

void initHomeScreen(UserData* userData){
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/home.glade");

    userData->screenApp->homeContainer.window_home = (GtkWidget *) gtk_builder_get_object(builder, "window_home");
    userData->screenApp->homeContainer.scroll_place = (GtkWidget *) gtk_builder_get_object(builder, "scroll_place");
    userData->screenApp->homeContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder, "box_place");
    userData->screenApp->homeContainer.btn_show_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_show_home");
    userData->screenApp->homeContainer.btn_addfriend_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_addfriend_home");
    userData->screenApp->homeContainer.btn_share_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_share_home");
    userData->screenApp->homeContainer.btn_back_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_back_home");
    userData->screenApp->homeContainer.label_username = (GtkWidget*) gtk_builder_get_object(builder, "label_username");

    userData->screenApp->homeContainer.btn_home_delete = (GtkWidget*) gtk_builder_get_object(builder,"btn_home_delete");
    userData->screenApp->homeContainer.btn_backup_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_backup_home");
    userData->screenApp->homeContainer.btn_restore_home = (GtkWidget*) gtk_builder_get_object(builder,"btn_restore_home");

    GtkCssProvider *provider_home = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_home,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_share_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_addfriend_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_back_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_backup_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_home_delete);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_show_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.btn_restore_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.box_place);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.window_home);
    css_set(provider_home,(GtkWidget *) userData->screenApp->homeContainer.label_username);


    g_signal_connect(userData->screenApp->homeContainer.btn_show_home, "clicked", G_CALLBACK(on_show_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_back_home, "clicked", G_CALLBACK(on_back_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_share_home, "clicked" , G_CALLBACK(on_share_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_home_delete,"clicked", G_CALLBACK(on_delete_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_backup_home, "clicked", G_CALLBACK(on_backup_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_restore_home, "clicked", G_CALLBACK(on_restore_clicked), userData);
    //g_signal_connect(userData->screenApp->homeContainer.btn_share_home,"clicked", G_CALLBACK(on_delete_clicked), userData);

}


void initShareScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/share_place.glade");

    userData->screenApp->shareContainer.window_share = (GtkWidget *) gtk_builder_get_object(builder, "window_share");
    userData->screenApp->shareContainer.fixed_main = (GtkWidget *) gtk_builder_get_object(builder, "fixed_main");
    userData->screenApp->shareContainer.fixed_control = (GtkWidget *) gtk_builder_get_object(builder, "fixed_control");
    userData->screenApp->shareContainer.btn_share_place = (GtkWidget *) gtk_builder_get_object(builder, "btn_share_place");
    userData->screenApp->shareContainer.label_message = (GtkWidget *) gtk_builder_get_object(builder, "label_message");
    userData->screenApp->shareContainer.fixed_show_place = (GtkWidget *) gtk_builder_get_object(builder, "fixed_show_place");
    userData->screenApp->shareContainer.scroll_place = (GtkWidget *) gtk_builder_get_object(builder, "scroll_place");
    userData->screenApp->shareContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder, "box_place");
    userData->screenApp->shareContainer.fixed_friend = (GtkWidget *) gtk_builder_get_object(builder, "fixed_friend");
    userData->screenApp->shareContainer.scroll_friend = (GtkWidget *) gtk_builder_get_object(builder, "scroll_friend");
    userData->screenApp->shareContainer.box_friend = (GtkWidget *) gtk_builder_get_object(builder, "box_friend");
    userData->screenApp->shareContainer.btn_back_share = (GtkWidget *) gtk_builder_get_object(builder, "btn_back_share");
    userData->screenApp->shareContainer.radio_show_place = (GtkWidget *) gtk_builder_get_object(builder, "radio_show_place");
    userData->screenApp->shareContainer.btn_request = (GtkWidget *) gtk_builder_get_object(builder, "btn_request");

    GtkCssProvider *provider_share = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_share,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);

    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.btn_share_place);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.btn_back_share);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.box_place);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.box_friend);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.label_message);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.btn_request);
    css_set(provider_share,(GtkWidget *) userData->screenApp->shareContainer.window_share);

    g_signal_connect(userData->screenApp->shareContainer.btn_back_share, "clicked", G_CALLBACK(on_back_share_clicked), userData);
    g_signal_connect(userData->screenApp->shareContainer.btn_share_place, "clicked", G_CALLBACK(on_share_place_clicked), userData);


}

void initAddFriendScreen(UserData* userData) {
    GtkBuilder  *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/addFriend.glade");
    userData->screenApp->addFriendContainer.window_addFriend = (GtkWidget *) gtk_builder_get_object(builder,"window_addFriend");
    userData->screenApp->addFriendContainer.fix_main = (GtkWidget *) gtk_builder_get_object(builder,"fix_main");
    userData->screenApp->addFriendContainer.fix_btn = (GtkWidget *) gtk_builder_get_object(builder,"fix_btn");
    userData->screenApp->addFriendContainer.fix_place1 = (GtkWidget *) gtk_builder_get_object(builder,"fix_place1");
    userData->screenApp->addFriendContainer.scroll_place1 = (GtkWidget *) gtk_builder_get_object(builder,"scroll_place1");
    userData->screenApp->addFriendContainer.box_place1 = (GtkWidget *) gtk_builder_get_object(builder,"box_place1");
    userData->screenApp->addFriendContainer.btn_add = (GtkWidget *) gtk_builder_get_object(builder,"btn_add");
    userData->screenApp->addFriendContainer.btn_back = (GtkWidget *) gtk_builder_get_object(builder,"btn_back");
    userData->screenApp->addFriendContainer.label_result = (GtkWidget *) gtk_builder_get_object(builder,"label_result");
    userData->screenApp->addFriendContainer.fix_place2 = (GtkWidget *) gtk_builder_get_object(builder,"fix_place2");
    userData->screenApp->addFriendContainer.scroll_place2 = (GtkWidget *) gtk_builder_get_object(builder,"scroll_place2");
    userData->screenApp->addFriendContainer.box_place2 = (GtkWidget *) gtk_builder_get_object(builder,"box_place2");
    userData->screenApp->addFriendContainer.label_name = (GtkWidget *) gtk_builder_get_object(builder,"label_name");
    userData->screenApp->addFriendContainer.btn_friend_request = (GtkWidget *) gtk_builder_get_object(builder,"btn_friend_request");

    GtkCssProvider *provider_addFriend = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_addFriend,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);

    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.window_addFriend);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.btn_back);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.btn_friend_request);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.label_name);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.btn_add);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.box_place2);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.box_place1);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.label_result);
    css_set(provider_addFriend,(GtkWidget *) userData->screenApp->addFriendContainer.fix_main);


    g_signal_connect(userData->screenApp->addFriendContainer.btn_back,"clicked",G_CALLBACK(on_back_addFriend_clicked),userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_addfriend_home,"clicked",G_CALLBACK(on_addFriend_home_clicked),userData);
    g_signal_connect(userData->screenApp->addFriendContainer.btn_add,"clicked",G_CALLBACK(on_add_addFriend_clicked),userData);
    g_signal_connect(userData->screenApp->addFriendContainer.btn_friend_request,"clicked",G_CALLBACK(on_see_friendRequest_clicked),userData);

}
void initFriendRequestScreen(UserData* userData){
    GtkBuilder  *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/friendRequest.glade");
    userData->screenApp->friendRequestContainer.window_friendRequest = (GtkWidget *) gtk_builder_get_object(builder,"window_friendRequest");
    userData->screenApp->friendRequestContainer.label_name = (GtkWidget *) gtk_builder_get_object(builder,"label_name");
    userData->screenApp->friendRequestContainer.btn_back = (GtkWidget *) gtk_builder_get_object(builder,"btn_back");
    userData->screenApp->friendRequestContainer.fix_place = (GtkWidget *) gtk_builder_get_object(builder,"fix_place");
    userData->screenApp->friendRequestContainer.fix_btn = (GtkWidget *) gtk_builder_get_object(builder,"fix_btn");
    userData->screenApp->friendRequestContainer.fix_main = (GtkWidget *) gtk_builder_get_object(builder,"fix_main");
    userData->screenApp->friendRequestContainer.btn_accept = (GtkWidget *) gtk_builder_get_object(builder,"btn_accept");
    userData->screenApp->friendRequestContainer.btn_delete = (GtkWidget *) gtk_builder_get_object(builder,"btn_delete");
    userData->screenApp->friendRequestContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder,"box_place");
    userData->screenApp->friendRequestContainer.label_username = (GtkWidget *) gtk_builder_get_object(builder,"label_username");
    userData->screenApp->friendRequestContainer.box_user = (GtkWidget *) gtk_builder_get_object(builder,"box_user");

    GtkCssProvider *provider_friendRequest = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_friendRequest,"/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/style/style.css",NULL);

    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.btn_back);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.btn_accept);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.btn_delete);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.label_name);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.box_place);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.window_friendRequest);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.label_username);
    css_set(provider_friendRequest,(GtkWidget *) userData->screenApp->friendRequestContainer.box_user);

    g_signal_connect(userData->screenApp->friendRequestContainer.btn_back,"clicked",G_CALLBACK(on_back_friendRequest_clicked),userData);
    g_signal_connect(userData->screenApp->friendRequestContainer.btn_accept,"clicked",G_CALLBACK(on_accept_friendRequest_clicked),userData);
    g_signal_connect(userData->screenApp->friendRequestContainer.btn_delete,"clicked",G_CALLBACK(on_delete_friendRequest_clicked),userData);


}
void initApp(UserData *userData){
    printf("batman\n");
    initLoginScreen(userData);
    initHomeScreen(userData);
    initShareScreen(userData);
    initRegisterScreen(userData);
    initAddFriendScreen(userData);
    initFriendRequestScreen(userData);
    initShowScreen(userData);
}
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
//#include <gtk/gtk.h>


void initLoginScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/login.glade");

    userData->screenApp->loginContainer.window_login = (GtkWidget *) gtk_builder_get_object(builder, "window_login");
    userData->screenApp->loginContainer.button_login = (GtkWidget *) gtk_builder_get_object(builder, "button_login");
    userData->screenApp->loginContainer.entry_user = (GtkWidget *) gtk_builder_get_object(builder, "entry_user");
    userData->screenApp->loginContainer.entry_pass = (GtkWidget *) gtk_builder_get_object(builder, "entry_pass");
    userData->screenApp->loginContainer.button_register = (GtkWidget *) gtk_builder_get_object(builder, "button_register");

//    g_signal_connect(userData->screenApp->loginContainer.window_login, "destroy", G_CALLBACK(gtk_main_quit()));
    g_signal_connect(userData->screenApp->loginContainer.button_login, "clicked",G_CALLBACK(on_login_clicked), userData);
    g_signal_connect(userData->screenApp->loginContainer.button_register, "clicked",G_CALLBACK(on_register_clicked),userData);
}

void initHomeScreen(UserData* userData){
    GtkBuilder *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/home.glade");

    userData->screenApp->homeContainer.window_home = (GtkWidget *) gtk_builder_get_object(builder, "window_home");
    userData->screenApp->homeContainer.scroll_place = (GtkWidget *) gtk_builder_get_object(builder, "scroll_place");
    userData->screenApp->homeContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder, "box_place");
    userData->screenApp->homeContainer.btn_show_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_show_home");
    userData->screenApp->homeContainer.btn_addfriend_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_addfriend_home");
    userData->screenApp->homeContainer.btn_share_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_share_home");
    userData->screenApp->homeContainer.btn_back_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_back_home");
    userData->screenApp->homeContainer.label_name_home = (GtkWidget*) gtk_builder_get_object(builder, "label_name_home");


    g_signal_connect(userData->screenApp->homeContainer.btn_show_home, "clicked", G_CALLBACK(on_show_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_back_home, "clicked", G_CALLBACK(on_back_clicked), userData);

}

void initShowScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/show.glade");

    userData->screenApp->showContainer.window_show  = (GtkWidget *) gtk_builder_get_object(builder, "window_show");
    userData->screenApp->showContainer.scroll_show_place = (GtkWidget *) gtk_builder_get_object(builder, "scroll_show_place");
    userData->screenApp->showContainer.box_show_place = (GtkWidget *) gtk_builder_get_object(builder, "box_show_place");
    userData->screenApp->showContainer.entry_place = (GtkWidget *) gtk_builder_get_object(builder, "entry_place");
    userData->screenApp->showContainer.category_show = (GtkWidget *) gtk_builder_get_object(builder, "category_show");
    userData->screenApp->showContainer.btn_addplace = (GtkWidget *) gtk_builder_get_object(builder, "btn_addplace");
    userData->screenApp->showContainer.btn_show_back = (GtkWidget *) gtk_builder_get_object(builder, "btn_show_back");
    userData->screenApp->showContainer.message_add_place = (GtkWidget *) gtk_builder_get_object(builder, "message_add_place");


    g_signal_connect(userData->screenApp->showContainer.btn_show_back, "clicked", G_CALLBACK(on_click_back_show), userData);
    g_signal_connect(userData->screenApp->showContainer.btn_addplace, "clicked", G_CALLBACK(on_click_add_place), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_share_home, "clicked" , G_CALLBACK(on_share_clicked), userData);
}

void initShareScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/share_place.glade");

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
    userData->screenApp->shareContainer.box_plac = (GtkWidget *) gtk_builder_get_object(builder, "box_plac");
    userData->screenApp->shareContainer.btn_back_share = (GtkWidget *) gtk_builder_get_object(builder, "btn_back_share");

    g_signal_connect(userData->screenApp->shareContainer.btn_back_share, "clicked", G_CALLBACK(on_back_share_clicked), userData);

}
void initRegisterScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/register.glade");
    userData->screenApp->registerContainer.window_register = (GtkWidget *) gtk_builder_get_object(builder, "window_register");
    userData->screenApp->registerContainer.button_back = (GtkWidget *) gtk_builder_get_object(builder, "button_back");
    userData->screenApp->registerContainer.button_register = (GtkWidget *) gtk_builder_get_object(builder, "button_register");
    userData->screenApp->registerContainer.entry_username = (GtkWidget *) gtk_builder_get_object(builder, "entry_username");
    userData->screenApp->registerContainer.entry_password = (GtkWidget *) gtk_builder_get_object(builder, "entry_password");
    userData->screenApp->registerContainer.entry_password1 = (GtkWidget *) gtk_builder_get_object(builder, "entry_password1");

    g_signal_connect(userData->screenApp->registerContainer.button_register,"clicked",G_CALLBACK(on_register_btn_clicked),userData);
    g_signal_connect(userData->screenApp->registerContainer.button_back,"clicked",G_CALLBACK(on_back_register_clicked),userData);
}
void initAddFriendScreen(UserData* userData) {
    GtkBuilder  *builder = gtk_builder_new_from_file("/home/phonghoang/ProgramingNetwork/views/src/screen/addFriend.glade");
    userData->screenApp->addFriendContainer.window_addFriend = (GtkWidget *) gtk_builder_get_object(builder,"window_addFriend");
    userData->screenApp->addFriendContainer.fix_main = (GtkWidget *) gtk_builder_get_object(builder,"fix_main");
    userData->screenApp->addFriendContainer.fix_btn = (GtkWidget *) gtk_builder_get_object(builder,"fix_btn");
    userData->screenApp->addFriendContainer.fix_place = (GtkWidget *) gtk_builder_get_object(builder,"fix_place");
    userData->screenApp->addFriendContainer.scroll_place = (GtkWidget *) gtk_builder_get_object(builder,"scroll_place");
    userData->screenApp->addFriendContainer.box_place = (GtkWidget *) gtk_builder_get_object(builder,"box_place");
    userData->screenApp->addFriendContainer.btn_add = (GtkWidget *) gtk_builder_get_object(builder,"btn_add");
    userData->screenApp->addFriendContainer.btn_back = (GtkWidget *) gtk_builder_get_object(builder,"btn_back");
    userData->screenApp->addFriendContainer.entry_friendname = (GtkWidget *) gtk_builder_get_object(builder,"entry_friendname");
    userData->screenApp->addFriendContainer.label_result = (GtkWidget *) gtk_builder_get_object(builder,"label_result");

    g_signal_connect(userData->screenApp->addFriendContainer.btn_back,"clicked",G_CALLBACK(on_back_addFriend_clicked),userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_addfriend_home,"clicked",G_CALLBACK(on_addFriend_home_clicked),userData);
    g_signal_connect(userData->screenApp->addFriendContainer.btn_add,"clicked",G_CALLBACK(on_add_addFriend_clicked),userData);

}
void initApp(UserData *userData){
    initLoginScreen(userData);
    initHomeScreen(userData);
    initShowScreen(userData);
    initShareScreen(userData);
    initRegisterScreen(userData);
    initAddFriendScreen(userData);
}
//
// Created by bumman on 20/12/2021.
//

#include "initScreen.h"
#include "LoginController.h"
#include "HomeController.h"
#include "ShowController.h"
//#include <gtk/gtk.h>


void initLoginScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/login.glade");

    userData->screenApp->loginContainer.window_login = (GtkWidget *) gtk_builder_get_object(builder, "window_login");
    userData->screenApp->loginContainer.button_login = (GtkWidget *) gtk_builder_get_object(builder, "button_login");
    userData->screenApp->loginContainer.entry_user = (GtkWidget *) gtk_builder_get_object(builder, "entry_user");
    userData->screenApp->loginContainer.entry_pass = (GtkWidget *) gtk_builder_get_object(builder, "entry_pass");

//    g_signal_connect(userData->screenApp->loginContainer.window_login, "destroy", G_CALLBACK(gtk_main_quit()));
    g_signal_connect(userData->screenApp->loginContainer.button_login, "clicked",G_CALLBACK(on_login_clicked), userData);
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

    g_signal_connect(userData->screenApp->homeContainer.btn_show_home, "clicked", G_CALLBACK(on_show_clicked), userData);

}

void initShowScreen(UserData* userData) {
    GtkBuilder *builder = gtk_builder_new_from_file("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/views/src/screen/show.glade");

    userData->screenApp->showContainer.window_show  = (GtkWidget *) gtk_builder_get_object(builder, "window_show");
    userData->screenApp->showContainer.scroll_show_place = (GtkWidget *) gtk_builder_get_object(builder, "scroll_show_place");
    userData->screenApp->showContainer.box_show_place = (GtkWidget *) gtk_builder_get_object(builder, "box_show_place");
    userData->screenApp->showContainer.entry_place = (GtkWidget *) gtk_builder_get_object(builder, "entry_place");
    userData->screenApp->showContainer.menu_btn_cate = (GtkWidget *) gtk_builder_get_object(builder, "menu_btn_cate");
    userData->screenApp->showContainer.btn_addplace = (GtkWidget *) gtk_builder_get_object(builder, "btn_addplace");
    userData->screenApp->showContainer.btn_show_back = (GtkWidget *) gtk_builder_get_object(builder, "btn_show_back");

    g_signal_connect(userData->screenApp->showContainer.btn_show_back, "clicked", G_CALLBACK(on_click_back_show), userData);
}

void initApp(UserData *userData){
    initLoginScreen(userData);
    initHomeScreen(userData);
    initShowScreen(userData);
}
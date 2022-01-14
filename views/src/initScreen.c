//
// Created by bumman on 20/12/2021.
//

#include "initScreen.h"
#include "LoginController.h"
#include "HomeController.h"
#include "ShowController.h"
#include "ShareController.h"
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
    userData->screenApp->homeContainer.btn_home_delete = (GtkWidget*) gtk_builder_get_object(builder,"btn_home_delete");
    userData->screenApp->homeContainer.btn_backup_home = (GtkWidget*) gtk_builder_get_object(builder, "btn_backup_home");
    userData->screenApp->homeContainer.btn_restore_home = (GtkWidget*) gtk_builder_get_object(builder,"btn_restore_home");

    g_signal_connect(userData->screenApp->homeContainer.btn_show_home, "clicked", G_CALLBACK(on_show_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_back_home, "clicked", G_CALLBACK(on_back_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_share_home, "clicked" , G_CALLBACK(on_share_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_home_delete,"clicked", G_CALLBACK(on_delete_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_backup_home, "clicked", G_CALLBACK(on_backup_clicked), userData);
    g_signal_connect(userData->screenApp->homeContainer.btn_restore_home, "clicked", G_CALLBACK(on_restore_clicked), userData);

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
    userData->screenApp->shareContainer.image = (GtkWidget* ) gtk_builder_get_object(builder,"");

//    GtkWidget *image;
//    image = gtk_image_new_from_file ("/home/bumman/hoctap/nam4/laptrinhmang/PJLTM/img/1.jpg");
//
//    GIcon * icon;
//
//    gtk_image_get_gicon(image,&icon,NULL);
//
//    add_message(icon,userData->screenApp->shareContainer.box_place,userData);



    g_signal_connect(userData->screenApp->shareContainer.btn_back_share, "clicked", G_CALLBACK(on_back_share_clicked), userData);

}

void initApp(UserData *userData){
    printf("init\n");
    initLoginScreen(userData);
    initHomeScreen(userData);
    initShareScreen(userData);
    initShowScreen(userData);
}
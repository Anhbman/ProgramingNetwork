//
// Created by bumman on 20/12/2021.
//

#include "initScreen.h"
#include <gtk/gtk.h>
#include "initClient.h"

int main(int argc, char *argv[]) {
//    if (argc < 3)
//        return -500;
    UserData userData;
    ScreenApp screenApp;
    gtk_init(&argc, &argv);

    if ((userData.sockFd = initSocket("127.0.0.1", 5000, &userData)) <= 0)
        return userData.sockFd;

    userData.screenApp = &screenApp;
    initApp(&userData);
    printf("init done\n");
    gtk_widget_show(screenApp.loginContainer.window_login);

    gtk_main();
    return 0;
}
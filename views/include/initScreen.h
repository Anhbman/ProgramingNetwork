//
// Created by bumman on 20/12/2021.
//

#ifndef PJLTM_INITSCREEN_H
#define PJLTM_INITSCREEN_H

#include <gtk/gtk.h>
#include "appScreen.h"

void initLoginScreen(UserData* userData);
void initRegisterScreen(UserData* userData);
void initHomeScreen(UserData* userData);
void initApp(UserData *userData);
void initAddFriendScreen(UserData* userData);
void initFriendRequestScreen(UserData* userData);

#endif //PJLTM_INITSCREEN_H

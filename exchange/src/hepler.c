//
// Created by bumman on 22/12/2021.
//

#include "hepler.h"

void add_message(GtkWidget *message, GtkWidget *addBox, UserData *userData) {
    GtkWidget *box = addBox;
    gtk_box_pack_start(GTK_BOX(box), message, FALSE, FALSE, 0);
}

char* dataRecv(UserData *userData) {

    int recvSize = 0;

    char* recvData = (char *)malloc(sizeof (char )*MAX_LEN_BUFF);

    recvSize = recv(userData->sockFd, recvData, MAX_LEN_BUFF, 0); /* echo to the client */
    if (recvSize < 0)
        perror("\nError ");
    else if (recvSize == 0)
        printf("Connection closed.\n");
    recvData[recvSize] = '\0';
    printf("recvSize: %d\nrecv1: %s\n",recvSize, recvData);

    return recvData;
}
/*
** EPITECH PROJECT, 2019
** event.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void manage_event_game(data_t *data) {
    while (sfRenderWindow_pollEvent(data->screen->window, \
        &data->screen->event)) {
        if (data->screen->event.type == sfEvtClosed)
            sfRenderWindow_close(data->screen->window);
    }
}

/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void launch(data_t *data)
{
    button_t *sprite = createmenu();
    if (data == NULL) {
        data = malloc(sizeof(data_t));
        data->screen = malloc(sizeof(screen_t));

        sfVideoMode video_mode = {1920, 1080, 32};
        data->screen->window = sfRenderWindow_create(video_mode, \
        "~", sfClose, NULL);
    }
    sfRenderWindow_setFramerateLimit(data->screen->window, 50);
    choose_lvl(data, sprite);
}

int main(void)
{
    launch(NULL);
    return (0);
}

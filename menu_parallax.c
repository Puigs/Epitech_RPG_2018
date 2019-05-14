/*
** EPITECH PROJECT, 2019
** menu_parallax.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void draw_para(data_t *data)
{
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[0]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[1]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[2]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[3]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[4]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[5]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->parallax[6]->sprite, NULL);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->title->sprite, NULL);
}

void move_parallax_more(data_t *data, int i)
{
    if (data->parallax[i]->position.x < -1920)
        data->parallax[i]->position.x = 0;
    else {
        data->parallax[i]->position.x -= i;
        sfSprite_setPosition(data->parallax[i]->sprite, \
        data->parallax[i]->position);
        sfClock_restart(data->parallax[i]->clock);
    }
}

void move_parallax(data_t *data)
{
    for (int i = 0; i <= 6; i += 1) {
        data->parallax[i]->timer = sfClock_getElapsedTime \
        (data->parallax[i]->clock);
        data->parallax[i]->seconds = data->parallax[i]-> \
        timer.microseconds / 1000000.0;
        if (data->parallax[i]->seconds > 0.02) {
            move_parallax_more(data, i);
        }
    }
}

void init_parallax_more(data_t *data)
{
    data->parallax[4] = create_obj("layers/5.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    data->parallax[5] = create_obj("layers/6.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    data->parallax[6] = create_obj("layers/7.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    for (int i = 0; i <= 6; i += 1)
        data->parallax[i]->clock = sfClock_create();
}

void init_parallax(data_t *data)
{
    data->parallax = malloc(sizeof(obj_t));
    data->title = malloc(sizeof(obj_t));
    data->title = create_obj("layers/title.png", \
    (sfVector2f){1920 / 2 - (526 / 2) - 20, 1080 / 2 - 358}, \
    (sfIntRect){0, 0, 526, 358});
    data->parallax[0] = create_obj("layers/1.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    data->parallax[1] = create_obj("layers/2.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    data->parallax[2] = create_obj("layers/3.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    data->parallax[3] = create_obj("layers/4.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 3840, 1080});
    init_parallax_more(data);
}

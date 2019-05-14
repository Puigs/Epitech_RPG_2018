/*
** EPITECH PROJECT, 2019
** print_inv.c
** File description:
** Puigsgaur
*/

#include "include/my.h"

void take_down_key(data_t *data)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(data->screen->window);

    if (pos.y > data->inv[0]->position.y && pos.y < \
    data->inv[0]->position.y + 130 \
    && pos.x > data->inv[0]->position.x && pos.x < \
    data->inv[0]->position.x + 130 \
    && data->key == 1 && sfMouse_isButtonPressed(sfMouseLeft)) {
        data->key = 0;
        data->key1[0]->y = data->y;
        data->key1[0]->x = data->x;
        data->key1[0]->pos = data->hero->pos;
        sfSprite_setPosition(data->key1[0]->sprite, data->key1[0]->pos);
    }
}

void take_key(data_t *data)
{
    if (data->key == 0 && data->sboss->stat == 1 \
    && data->key1[0]->y == data->y && \
    data->key1[0]->x == data->x \
    && data->hero->pos.y > data->key1[0]->pos.y - 50 && data->hero->pos.y < \
    data->key1[0]->pos.y + 50 && data->hero->pos.x > \
    data->key1[0]->pos.x - 50 \
    && data->hero->pos.x < data->key1[0]->pos.x + 50 \
    && data->screen->event.key.code == sfKeyE) {
        data->key = 1;
    }
}

void print_key(data_t *data)
{
    if (data->key == 0 && data->sboss->stat == 1 \
    && data->key1[0]->y == data->y && \
    data->key1[0]->x == data->x) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->key1[0]->sprite, NULL);
    }
}

void print_inv(data_t *data)
{
    sfRenderWindow_drawSprite(data->screen->window, \
    data->inv[0]->sprite, NULL);
    if (data->key == 1) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->key_inv[0]->sprite, NULL);
    }
}

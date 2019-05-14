/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** movement
*/

#include "include/my.h"

void left_side(data_t *data)
{
    int stock_x = 0;
    int stock_y = 0;

    data->hero->pos.x -= 5;
    stock_x = (data->hero->pos.x + 11) / 16;
    stock_y = (data->hero->pos.y + 24) / 16;
    if (data->hero->pos.x > 0 && data->hero->pos.y > 0 && \
        data->hero->pos.x < 1920 && data->hero->pos.y < 1920) {
        if (data->col[stock_y][stock_x] == 1)
            data->hero->pos.x += 5;
    }
    data->hero->rect.top = 7;
    data->hero->rect.width = 21;
    data->hero->rect.height = 23;
    my_anime(data->hero);
}

void right_side(data_t *data)
{
    int stock_x = 0;
    int stock_y = 0;

    data->hero->pos.x += 5;
    stock_x = (data->hero->pos.x + 11) / 16;
    stock_y = (data->hero->pos.y + 23) / 16;
    if (data->hero->pos.x > 0 && data->hero->pos.y > 0) {
        if (data->col[stock_y][stock_x] == 1)
            data->hero->pos.x -= 5;
    }
    data->hero->rect.top = 104;
    data->hero->rect.width = 22;
    data->hero->rect.height = 23;
    my_anime(data->hero);
}

void up_side(data_t *data)
{
    int stock_x = 0;
    int stock_y = 0;

    data->hero->pos.y -= 5;
    stock_x = (data->hero->pos.x + 11) / 16;
    stock_y = (data->hero->pos.y + 13) / 16;
    if (data->hero->pos.x > 0 && data->hero->pos.y > 0) {
        if (data->col[stock_y][stock_x] == 1)
            data->hero->pos.y += 5;
    }
    data->hero->rect.top = 149;
    data->hero->rect.width = 22;
    data->hero->rect.height = 26;
    my_anime(data->hero);
}

void down_side(data_t *data)
{
    int stock_x = 0;
    int stock_y = 0;

    data->hero->pos.y += 5;
    stock_x = (data->hero->pos.x + 11) / 16;
    stock_y = (data->hero->pos.y + 28) / 16;
    if (data->hero->pos.x > 0 && data->hero->pos.y > 0) {
        if (data->col[stock_y][stock_x] == 1)
            data->hero->pos.y -= 5;
    }
    data->hero->rect.top = 54;
    data->hero->rect.width = 22;
    data->hero->rect.height = 26;
    my_anime(data->hero);
}

void hmovement(data_t *data)
{
    data->hero->timer = sfClock_getElapsedTime(data->hero->clock);
    data->hero->seconds = data->hero->timer.microseconds / 1000000.0;
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->ennemy->a == 0)
        data->hero->att = 1;
    if (data->hero->att == 1)
        attack_left(data->hero);
    call_hmovement(data);
    if (!sfKeyboard_isKeyPressed(sfKeyD) && \
    !sfKeyboard_isKeyPressed(sfKeyQ) && !sfKeyboard_isKeyPressed(sfKeyS) && \
    !sfKeyboard_isKeyPressed(sfKeyZ) && data->hero->att == 0)
        data->hero->rect.left = 0;
    if (!sfKeyboard_isKeyPressed(sfKeySpace))
        data->ennemy->a = 0;
}

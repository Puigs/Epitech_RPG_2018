/*
** EPITECH PROJECT, 2019
** rpgmenu
** File description:
** parralax
*/

#include "include/my.h"

void move_again(data_t *data)
{
    if (data->mob[data->y][data->x][data->l]->div < 40 && \
        can_movee(data) == 1) {
        data->hero->pos.x += data->mob[data->y][data->x][data->l]->move.x * 40;
        data->hero->pos.y += data->mob[data->y][data->x][data->l]->move.y * 40;
        data->hero->pv -= 1;
    }
    if (data->mob[data->y][data->x][data->l]->pv <= 0)
        data->mob[data->y][data->x][data->l]->pos.x = -3000;
    sfSprite_setPosition(data->mob[data->y][data->x][data->l]->sprite, \
        data->mob[data->y][data->x][data->l]->pos);
}

void move_more(data_t *data)
{
    data->mob[data->y][data->x][data->l]->move.x = (data->hero->pos.x + 12) \
    - (data->mob[data->y][data->x][data->l]->pos.x + 57);
    data->mob[data->y][data->x][data->l]->move.y = (data->hero->pos.y + 12) \
    - (data->mob[data->y][data->x][data->l]->pos.y + 39);
    data->mob[data->y][data->x][data->l]->div = \
    sqrt(data->mob[data->y][data->x][data->l]->move.x * \
        data->mob[data->y][data->x][data->l]->move.x + \
    data->mob[data->y][data->x][data->l]->move.y * \
    data->mob[data->y][data->x][data->l]->move.y);
}

void move(data_t *data)
{
    move_more(data);
    if (data->mob[data->y][data->x][data->l]->div < 200 && \
        can_movee(data) == 1) {
        data->mob[data->y][data->x][data->l]->move.x /= \
        data->mob[data->y][data->x][data->l]->div;
        data->mob[data->y][data->x][data->l]->move.y /= \
        data->mob[data->y][data->x][data->l]->div;
        data->mob[data->y][data->x][data->l]->pos.x += \
        data->mob[data->y][data->x][data->l]->move.x * 1.5;
        data->mob[data->y][data->x][data->l]->pos.y += \
        data->mob[data->y][data->x][data->l]->move.y * 1.5;
    }
    move_again(data);
}

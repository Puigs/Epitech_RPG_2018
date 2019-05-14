/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** collide
*/

#include "include/my.h"

void collide_left(data_t *data)
{
    if (data->mob[data->y][data->x][data->l]->pos.x < data->hero->pos.x && \
        data->mob[data->y][data->x][data->l]->pos.y + 100 > \
        data->hero->pos.y + 10 && \
        data->mob[data->y][data->x][data->l]->pos.y < \
        data->hero->pos.y + 10 && \
        data->mob[data->y][data->x][data->l]->div < 100) {
        data->mob[data->y][data->x][data->l]->pv -= 1;
        data->mob[data->y][data->x][data->l]->pos.x -= \
        data->mob[data->y][data->x][data->l]->move.x * 40;
        data->mob[data->y][data->x][data->l]->pos.y -= \
        data->mob[data->y][data->x][data->l]->move.y * 40;
    }
}

void collide_right(data_t *data)
{
    if (data->mob[data->y][data->x][data->l]->pos.x > \
        data->hero->pos.x - 20 && \
        data->mob[data->y][data->x][data->l]->pos.y + \
        100 > data->hero->pos.y && \
        data->mob[data->y][data->x][data->l]->pos.y - \
        100 < data->hero->pos.y && \
        data->mob[data->y][data->x][data->l]->div < 100) {
        data->mob[data->y][data->x][data->l]->pv -= 1;
        data->mob[data->y][data->x][data->l]->pos.x -= \
        data->mob[data->y][data->x][data->l]->move.x * 40;
        data->mob[data->y][data->x][data->l]->pos.y -= \
        data->mob[data->y][data->x][data->l]->move.y * 40;
    }
}

void collide_up(data_t *data)
{
    if (data->mob[data->y][data->x][data->l]->pos.y < \
        data->hero->pos.y + 20 && \
        data->mob[data->y][data->x][data->l]->pos.x - 100 < \
        data->hero->pos.x && \
        data->mob[data->y][data->x][data->l]->pos.x + 100 > \
        data->hero->pos.y && \
        data->mob[data->y][data->x][data->l]->div < 100) {
        data->mob[data->y][data->x][data->l]->pv -= 1;
        data->mob[data->y][data->x][data->l]->pos.x -= \
        data->mob[data->y][data->x][data->l]->move.x * 40;
        data->mob[data->y][data->x][data->l]->pos.y -= \
        data->mob[data->y][data->x][data->l]->move.y * 40;
    }
}

void collide_down(data_t *data)
{
    if (data->mob[data->y][data->x][data->l]->pos.y > \
        data->hero->pos.y - 20 && \
        data->mob[data->y][data->x][data->l]->pos.x - 100 < \
        data->hero->pos.x && \
        data->mob[data->y][data->x][data->l]->pos.x + 100 > \
        data->hero->pos.y && \
        data->mob[data->y][data->x][data->l]->div < 100) {
        data->mob[data->y][data->x][data->l]->pv -= 1;
        data->mob[data->y][data->x][data->l]->pos.x -= \
        data->mob[data->y][data->x][data->l]->move.x * 40;
        data->mob[data->y][data->x][data->l]->pos.y -= \
        data->mob[data->y][data->x][data->l]->move.y * 40;
    }
}

void is_collide(data_t *data)
{
    if (data->hero->rect.top == 7){
        collide_left(data);
    }
    if (data->hero->rect.top == 104)
        collide_right(data);
    if (data->hero->rect.top == 54)
        collide_down(data);
    if (data->hero->rect.top == 149)
        collide_up(data);
}

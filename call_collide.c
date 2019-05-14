/*
** EPITECH PROJECT, 2019
** call_collide.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void col_att(data_t *data)
{
    if (data->hero->rect.top == 7){
        if (data->boss->rboss.left == 119 && data->boss->div < 30)
            data->boss->pv -= 5;
    }
    else if (data->hero->rect.top == 104) {
        if (data->boss->rboss.left == 47 && data->boss->div < 30)
            data->boss->pv -= 5;
    }
    else if (data->hero->rect.top == 54) {
        if (data->boss->rboss.left == 80 && data->boss->div < 30)
            data->boss->pv -= 5;
    }
    else if (data->hero->rect.top == 149) {
        if (data->boss->rboss.left == 4 && data->boss->div < 30)
            data->boss->pv -= 5;
    }
}

void col_att2(data_t *data)
{
    if (data->hero->rect.top == 7){
        if (data->sboss->rboss.left == 119 && data->sboss->div < 40)
            data->sboss->pv--;
    }
    else if (data->hero->rect.top == 104) {
        if (data->sboss->rboss.left == 47 && data->sboss->div < 40)
            data->sboss->pv--;
    }
    else if (data->hero->rect.top == 54) {
        if (data->sboss->rboss.left == 80 && data->sboss->div < 40)
            data->sboss->pv--;
    }
    else if (data->hero->rect.top == 149) {
        if (data->sboss->rboss.left == 4 && data->sboss->div < 40)
            data->sboss->pv--;
    }
}

void collide(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->ennemy->a == 0) {
        data->mob[data->y][data->x][data->l]->a = 1;
        is_collide(data);
    }
}

void collide2(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->boss->a == 0) {
        data->boss->a = 1;
        col_att(data);
    }
    if (!sfKeyboard_isKeyPressed(sfKeySpace))
        data->boss->a = 0;
}

void collide3(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->sboss->a == 0) {
        data->sboss->a = 1;
        col_att2(data);
    }
    if (!sfKeyboard_isKeyPressed(sfKeySpace))
        data->sboss->a = 0;
}

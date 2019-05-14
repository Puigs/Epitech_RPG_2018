/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** boss final
*/

#include "include/my.h"

void my_sboss(data_t *data)
{
    if (data->sboss->pv > 0) {
        boss_face2(data->sboss, data->hero);
        collide3(data);
        boss_detection(data->hero, data->sboss);
        b_attaque(data->sboss, data);
        print_boss(data->sboss, data->screen->window);
    }
    if (data->sboss->pv <= 0)
        data->sboss->stat = 1;
}

void which_boss(data_t *data)
{
    if (data->y == 3 && data->x == 3)
        my_fboss(data);
    if (data->y == 0 && data->x == 0)
        my_sboss(data);
}

void my_fboss(data_t *data)
{
    if (data->boss->pv) {
        boss_face(data->boss, data->hero);
        collide2(data);
        boss_detection(data->hero, data->boss);
        b_attaque(data->boss, data);
        print_boss(data->boss, data->screen->window);
    }
}

void boss_face2(boss_t *boss, hero_t *hero)
{

    if (hero->pos.y < boss->pos.y - 30) {
        boss->pos2.x = 865;
        boss->pos2.y = 400;
        sfSprite_setRotation(boss->spark, 180);
        boss->rboss.left = 80;
        boss->rboss.width = 39;
    } else if (hero->pos.y > boss->pos.y + 30) {
        boss->pos2.x = 765;
        boss->pos2.y = 430;
        sfSprite_setRotation(boss->spark, 0);
        boss->rboss.left = 4;
        boss->rboss.width = 39;
    } else {
        boss->rboss.width = 30;
        if (hero->pos.x < boss->pos.x) {
            boss->pos2.x = 800;
            boss->pos2.y = 365;
            sfSprite_setRotation(boss->spark, 90);
            boss->rboss.left = 47;
        } else if (hero->pos.x > boss->pos.x) {
            boss->pos2.x = 830;
            boss->pos2.y = 470;
            sfSprite_setRotation(boss->spark, 270);
            boss->rboss.left = 119;
        }
    }
}

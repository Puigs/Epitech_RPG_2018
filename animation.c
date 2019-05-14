/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** anim
*/

#include "include/my.h"

void my_anime(hero_t *hero)
{
    hero->timer = sfClock_getElapsedTime(hero->clock);
    hero->seconds = hero->timer.microseconds / 1000000.0;

    if (hero->seconds > 0.02) {
        hero->rect.left += 24;
        if (hero->rect.left > (24 * 11))
            hero->rect.left = 0;
        sfClock_restart(hero->clock);
    }
}

int left_cond2(hero_t *hero)
{
    if (hero->rect.left == 445) {
        hero->rect.left = 486;
        return (0);
    }
    if (hero->rect.left == 486) {
        hero->rect.left = 520;
        return (0);
    }
    if (hero->rect.left == 520) {
        hero->rect.left = 563;
        return (0);
    }
    if (hero->rect.left == 563) {
        hero->rect.left = 600;
        return (0);
    }
    return (0);
}

int left_cond(hero_t *hero)
{
    if (hero->rect.left == 280) {
        hero->rect.left = 325;
        return (0);
    }
    if (hero->rect.left == 325) {
        hero->rect.left = 363;
        return (0);
    }
    if (hero->rect.left == 363) {
        hero->rect.left = 404;
        return (0);
    }
    if (hero->rect.left == 404) {
        hero->rect.left = 445;
        return (0);
    }
    left_cond2(hero);
    return (0);
}

void attack_left(hero_t *hero)
{
    hero->timer2 = sfClock_getElapsedTime(hero->clock2);
    hero->seconds2 = hero->timer2.microseconds / 1000000.0;
    if (hero->rect.left < 280) {
        hero->rect.left = 280;
        hero->rect.width = 34;
        hero->rect.height = 40;
        hero->pos.x -= 18;
    }
    else if (hero->seconds2 > 0.05) {
        left_cond(hero);
        if (hero->rect.left > 590) {
            hero->rect.left = 0;
            hero->att = 0;
            hero->rect.width = 22;
            hero->rect.height = 26;
            hero->pos.x += 18;
        }
        sfClock_restart(hero->clock2);
    }
}

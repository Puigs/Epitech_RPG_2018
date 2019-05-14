/*
** EPITECH PROJECT, 2019
** create_boos_more.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_boss_creation(boss_t *boss)
{
    boss->att = 0;
    boss->spk = 0;
    boss->front = 34;
    boss->side = 22;
    boss->rboss.top = 85;
    boss->rboss.left = 0;
    boss->rboss.width = 40;
    boss->rboss.height = 41;
    boss->rspark.top = 0;
    boss->rspark.left = 0;
    boss->rspark.width = 91;
    boss->rspark.height = 157;
    boss->stat = 1;
    boss->clock = sfClock_create();
    boss->clock2 = sfClock_create();
}

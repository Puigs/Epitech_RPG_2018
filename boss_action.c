/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** boss action
*/

#include "include/my.h"

void spark_att(boss_t *boss)
{
    boss->timer = sfClock_getElapsedTime(boss->clock);
    boss->seconds = boss->timer.microseconds / 1000000.0;

    if (boss->seconds > 0.05) {
        if (boss->rspark.left == 0) {
            boss->rspark.left = 93;
            boss->rspark.width = 107;
        }
        else if (boss->rspark.left == 93) {
            boss->rspark.left = 0;
            boss->rspark.width = 91;
        }
        sfClock_restart(boss->clock);
        boss->spk++;
    }
}

void anim_att(boss_t *boss)
{
    boss->timer = sfClock_getElapsedTime(boss->clock);
    boss->seconds = boss->timer.microseconds / 1000000.0;
    if (boss->seconds > 2) {
        if (boss->rboss.top == 85)
            boss->rboss.top = 44;
        else if (boss->rboss.top == 44) {
            boss->rboss.top = 6;
        } else {
            boss->att = 2;
        }
        sfClock_restart(boss->clock);
    }
}

void b_attaque(boss_t *boss, data_t *data)
{
    boss->timer2 = sfClock_getElapsedTime(boss->clock);
    boss->seconds2 = boss->timer.microseconds / 1000000.0;

    if (boss->att == -1) {
        boss->rboss.top = 85;
        boss->rboss.left = 0;
        boss->rboss.width = 22;
        boss->rboss.height = 41;
        boss->rspark.top = 0;
        boss->rspark.left = 0;
        boss->rspark.width = 91;
        boss->rspark.height = 157;
        boss->att = 0;
        boss->spk = 0;
    }
    if (boss->att == 1)
        anim_att(boss);
    if (boss->att == 2) {
        spark_att(boss);
        print_spark(boss, data->screen->window);
        boss_collide(boss, data);
    }
    if (boss->spk > 50) {
        boss->spk = 0;
        boss->att = -1;
    }
}

void boss_detection(hero_t *hero, boss_t *boss)
{
    float xdis = hero->pos.x - boss->pos.x;
    float ydis = hero->pos.y - hero->pos.y;
    boss->div = sqrt((xdis * xdis) + (ydis * ydis));
    boss->timer = sfClock_getElapsedTime(boss->clock);
    boss->seconds = boss->timer.microseconds / 1000000.0;

    if (boss->seconds > 3) {
        if (boss->div < 50 && boss->att == 0)
            boss->att = 1;
    }
}

boss_t *sboss_creation(void)
{
    boss_t *boss = malloc(sizeof(boss_t));

    boss->boss = sfSprite_create();
    boss->spark = sfSprite_create();
    boss->tboss = sfTexture_createFromFile("layers/boss.png", NULL);
    boss->tspark = sfTexture_createFromFile("layers/eclaireboss.png", NULL);
    boss->pos = (sfVector2f){800, 400};
    boss->pos2 = (sfVector2f){800, 400};
    boss->pv = 20;
    boss->div = 0;
    boss->att = 0;
    boss->front = 34;
    boss->side = 22;
    boss->spk = 0;
    boss->rboss.top = 85;
    boss->rboss.left = 0;
    boss->rboss.width = 40;
    boss->rboss.height = 41;
    boss->rspark.top = 0;
    boss->rspark.left = 0;
    boss->rspark.width = 91;
    boss->rspark.height = 157;
    boss->stat = 0;
    boss->clock = sfClock_create();
    boss->clock2 = sfClock_create();
    return (boss);
}

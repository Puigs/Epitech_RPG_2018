/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** boss and spark
*/

#include "include/my.h"

boss_t *boss_creation(void)
{
    boss_t *boss = malloc(sizeof(boss_t));

    boss->boss = sfSprite_create();
    boss->spark = sfSprite_create();
    boss->tboss = sfTexture_createFromFile("layers/boss.png", NULL);
    boss->tspark = sfTexture_createFromFile("layers/eclaireboss.png", NULL);
    boss->pos = (sfVector2f){950, 300};
    boss->pos2 = (sfVector2f){950, 300};
    boss->pv = 40;
    boss->div = 0;
    init_boss_creation(boss);
    return (boss);
}

void boss_face(boss_t *boss, hero_t *hero)
{

    if (hero->pos.y < boss->pos.y - 30) {
        boss->pos2.x = boss->pos.x + 65;
        boss->pos2.y = boss->pos.y;
        sfSprite_setRotation(boss->spark, 180);
        boss->rboss.left = 80;
        boss->rboss.width = 39;
    } else if (hero->pos.y > boss->pos.y + 30) {
        boss->pos2.x = boss->pos.x - 40;
        boss->pos2.y = boss->pos.y + 40;
        sfSprite_setRotation(boss->spark, 0);
        boss->rboss.left = 4;
        boss->rboss.width = 39;
    } else {
        boss->rboss.width = 30;
        if (hero->pos.x < boss->pos.x) {
            boss->pos2.x = boss->pos.x + 10;
            boss->pos2.y = boss->pos.y - 40;
            sfSprite_setRotation(boss->spark, 90);
            boss->rboss.left = 47;
        } else if (hero->pos.x > boss->pos.x) {
            boss->pos2.x = boss->pos.x + 25;
            boss->pos2.y = boss->pos.y + 70;
            sfSprite_setRotation(boss->spark, 270);
            boss->rboss.left = 119;
        }
    }
}

void print_boss(boss_t *boss, sfRenderWindow *window)
{
    sfSprite_setTexture(boss->boss, boss->tboss, sfTrue);
    sfSprite_setTextureRect(boss->boss, boss->rboss);
    sfSprite_setPosition(boss->boss, boss->pos);
    sfRenderWindow_drawSprite(window, boss->boss, NULL);
}

void print_spark(boss_t *boss, sfRenderWindow *window)
{
    sfSprite_setTexture(boss->spark, boss->tspark, sfTrue);
    sfSprite_setTextureRect(boss->spark, boss->rspark);
    sfSprite_setPosition(boss->spark, boss->pos2);
    sfRenderWindow_drawSprite(window, boss->spark, NULL);
}

void boss_collide(boss_t *boss, data_t *data)
{
    if (data->hero->pos.y < boss->pos.y + 30 && \
    data->hero->pos.y > boss->pos.y - 157 && \
    data->hero->pos.x > boss->pos.x - 30 && \
    data->hero->pos.x < boss->pos.x + 30) {
        data->hero->pv--;
        data->hero->pos.y -= 130 - data->boss->div;
    } else if (data->hero->pos.y > boss->pos.y - 30 && \
    data->hero->pos.y < boss->pos.y + 157 && \
    data->hero->pos.x > boss->pos.x - 30 && \
    data->hero->pos.x < boss->pos.x + 30) {
        data->hero->pv--;
        data->hero->pos.y += 130 - data->boss->div;
    } else {
        boss_collidesuite(data, boss);
    }
}

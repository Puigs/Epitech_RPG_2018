/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** hero_attack
*/

void attack_left(hero_t *hero)
{
    hero->att = 1;
    hero->timer2 = sfClock_getElapsedTime(hero->clock2);
    hero->seconds2 = hero->timer2.microseconds / 1000000.0;
    if (hero->rect.left < 298) {
        hero->rect.left = 280;
        hero->rect.width = 28;
        hero->rect.height = 40;
        hero->pos.x -= 18;
    }
    if (hero->seconds > 0.02) {
        hero->rect.left += 34;
        if (hero->rect.left == 590) {
            hero->rect.left = 280;
            hero->att = 0;
        }
        sfClock_restart(hero->clock2);
    }
}

void attack_down(hero_t *hero)
{
    hero->att = 1;
    hero->timer2 = sfClock_getElapsedTime(hero->clock2);
    hero->seconds2 = hero->timer2.microseconds / 1000000.0;
    if (hero->rect.left < 298) {
        hero->rect.left = 280;
        hero->rect.width = 28;
        hero->rect.height = 40;
        hero->pos.x -= 18;
    }
    if (hero->seconds > 0.02) {
        hero->rect.left += 34;
        if (hero->rect.left == 590) {
            hero->rect.left = 280;
            hero->att = 0;
        }
        sfClock_restart(hero->clock2);
    }
}

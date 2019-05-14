/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** attack_down
*/

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

/*
** EPITECH PROJECT, 2019
** game.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void game_more(data_t *data)
{
    sfRenderWindow_drawSprite(data->screen->window, \
    data->map[data->y][data->x]->sprite, NULL);
    for (; data->mob[data->y][data->x][data->l]; data->l += 1) {
        if (data->mob[data->y][data->x][data->l]->pv > 0)
            sfRenderWindow_drawSprite(data->screen->window, \
            data->mob[data->y][data->x][data->l]->sprite, NULL);
    }
    print_hero(data->hero, data->screen->window);
    draw_dial(data);
    draw_dial2(data);
    draw_s_dial(data);
    which_boss(data);
    print_life(data);
    call_e(data);
    call_a(data);
    call_cast(data);
    print_inv(data);
    print_key(data);
    sfRenderWindow_display(data->screen->window);
    data->l = 0;
}

void start_game_more(data_t *data)
{
    if (data->pnj != 1)
        hmovement(data);
    if (data->y == 2 && data->x == 1 \
    && data->hero->pos.y > 770 && data->hero->pos.y < 860 \
    && data->hero->pos.x > 950 && data->hero->pos.x < 1170 \
    && data->screen->event.key.code == sfKeyA)
        save_write(data);
    sfRenderWindow_clear(data->screen->window, sfBlack);
    sfRenderWindow_drawSprite(data->screen->window, \
    data->map[data->y][data->x]->sprite, NULL);
}

void start_game(data_t *data)
{
    manage_event_game(data);
    if (data->y <= 2 && data->x <= 2)
        check_localisation(data);
    check_castle(data);
    take_key(data);
    take_down_key(data);
    for (; data->mob[data->y][data->x][data->l]; data->l += 1)
        move(data);
    data->l = 0;
    for (; data->mob[data->y][data->x][data->l]; data->l += 1)
        collide(data);
    data->l = 0;
    start_game_more(data);
    game_more(data);
}

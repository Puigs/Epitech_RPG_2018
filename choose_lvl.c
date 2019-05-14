/*
** EPITECH PROJECT, 2019
** choose_lvl.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void choose_launch(data_t *data)
{
    if (data->pause == 2) {
        init_data(data);
        launch(data);
    }
}

void choose_lvl_more(data_t *data, int c)
{
    start_game(data);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && c == 0) {
        c = 1;
        data->pause = bpause(data, c);
    }
    if (!sfKeyboard_isKeyPressed(sfKeyEscape))
        c = 0;
    if (data->hero->pv <= 0) {
        game_over(data);
        data->pause = 2;
    }
    if (data->boss->pv <= 0) {
        victory(data);
        data->pause = 2;
    }
}

void choose_lvl(data_t *data, button_t *sprite)
{
    int c = 0;
    int call_menu = 1;

    check_save(data);
    init_data(data);
    while (sfRenderWindow_isOpen(data->screen->window)) {
        if (call_menu == 1) {
            call_menu = menu(sprite, data);
        } else if (call_menu == 2)
            break;
        else
            choose_lvl_more(data, c);
        if (data->pause == 2)
            break;
        if (data->pause == 4)
            break;
    }
    choose_launch(data);
}

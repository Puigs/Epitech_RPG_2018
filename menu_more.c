/*
** EPITECH PROJECT, 2019
** menu_more.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void createmenu_text(button_t *menu)
{
    menu[0].texte = "PLAY";
    menu[1].texte = "SAVE";
    menu[2].texte = "HOW TO PLAY";
    menu[3].texte = "EXIT";
}

void menu_more(button_t *sprite, data_t *data)
{
    sprite[0].c = 4;
    my_events2(data->screen->window, data);
    move_parallax(data);
    sfRenderWindow_clear(data->screen->window, sfColor_fromRGB(0, 255, 255));
    draw_para(data);
    sprite = print_sprite2(data->screen->window, sprite);
    print_menu(sprite, data->screen->window);
    print_s(sprite, data->screen->window);
    sfRenderWindow_display(data->screen->window);
}

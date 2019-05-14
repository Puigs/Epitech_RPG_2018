/*
** EPITECH PROJECT, 2019
** how_to_more
** File description:
** Puigsagur
*/

#include "include/my.h"

void print_show_more(button_t *menu, int a)
{
    sfText_setString(menu[a].text, menu[a].texte);
    sfText_setFont(menu[a].text, menu[a].fonte);
    sfText_setCharacterSize(menu[a].text, 40);
}

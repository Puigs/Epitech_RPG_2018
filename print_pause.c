/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** print_menu pause
*/

#include "include/my.h"

void print_menu2(button_t *menu, sfRenderWindow *window)
{
    for (int a = 0; a < 2; a++) {
        sfSprite_setTextureRect(menu[a].sprite, menu[a].rect);
        sfSprite_setPosition(menu[a].sprite, menu[a].pos);
        sfRenderWindow_drawSprite(window, menu[a].sprite, NULL);
    }
}

void print_sprite3_more(button_t *sprite, int a)
{
    sprite[a].rect.top = 49;
    sprite[a].rect.height = 45;
    sprite[0].c = a;
}

button_t *print_sprite3(sfRenderWindow *window, button_t *sprite)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);

    for (int a = 0; a < 2; a++) {
        pos = sfMouse_getPositionRenderWindow(window);
        if (pos.x > sprite[a].pos.x && pos.x < sprite[a].pos.x + 190 && \
            pos.y > sprite[a].pos.y && pos.y < sprite[a].pos.y + 50 && \
            !sfMouse_isButtonPressed(sfMouseLeft)) {
                sprite[a].rect.top = 0;
                sprite[a].rect.height = 49;
        } else if (pos.x > sprite[a].pos.x && pos.x < sprite[a].pos.x + 190 \
        && pos.y > sprite[a].pos.y && pos.y < sprite[a].pos.y + 50 && \
        sfMouse_isButtonPressed(sfMouseLeft) ){
                print_sprite3_more(sprite, a);
        } else {
                sprite[a].rect.top = 94;
                sprite[a].rect.height = 49;
        }
    }
    return (sprite);
}

void print_s2(button_t *menu, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int a = 0; a < 2; a++) {
        pos.y = 636 + a * 100;
        pos.x = 880;
        sfText_setString(menu[a].text, menu[a].texte);
        sfText_setFont(menu[a].text, menu[a].fonte);
        sfText_setCharacterSize(menu[a].text, 40);
        sfText_setPosition(menu[a].text, pos);
        sfRenderWindow_drawText(window, menu[a].text, NULL);
    }
}

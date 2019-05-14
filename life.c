/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** life and other
*/

#include "include/my.h"

char *my_int_to_str(int nb)
{
    int a = nb;
    char *str;
    int p = 1;
    int b = 0;
    int i = 0;
    if (nb == 0)
        return ("0");
    for (; a > 0; i++) {
        a = a / 10;
        p *= 10;
    }
    p /= 10;
    str = malloc(sizeof(char)* i + 1);
    str[i] = 0;
    for (i = 0; p > 0; i++) {
        str[i] = nb / p + 48 - (b * 10);
        b *= 10;
        b += str[i] - 48;
        p /= 10;
    }
    return (str);
}

void print_life(data_t *data)
{
    sfText_setString(data->hero->text2, "PV: ");
    sfText_setFont(data->hero->text2, data->hero->fonte);
    sfText_setCharacterSize(data->hero->text2, 60);
    sfText_setPosition(data->hero->text2, (sfVector2f){100, 40});
    sfText_setString(data->hero->text, my_int_to_str(data->hero->pv));
    sfText_setFont(data->hero->text, data->hero->fonte);
    sfText_setCharacterSize(data->hero->text, 60);
    sfText_setPosition(data->hero->text, (sfVector2f){100, 100});
    sfRenderWindow_drawText(data->screen->window, data->hero->text, NULL);
    sfRenderWindow_drawText(data->screen->window, data->hero->text2, NULL);

}

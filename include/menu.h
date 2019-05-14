/*
** EPITECH PROJECT, 2019
** menu.h
** File description:
** Puisgagur
*/

#ifndef __MENU__
#define __MENU__

typedef struct button_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    sfText *text;
    sfFont *fonte;
    char *texte;
    int c;
    sfClock *clock;
    sfTime timer;
    float seconds;
} button_t;

#endif /* __MENU__ */

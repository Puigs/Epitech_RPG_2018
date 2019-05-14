/*
** EPITECH PROJECT, 2019
** map.h
** File description:
** Puigsagur
*/

#ifndef __MAP__
#define __MAP__

typedef struct map_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    int left;
    int bot;
    int right;
    int top;
} map_t;

#endif /* __MAP__ */

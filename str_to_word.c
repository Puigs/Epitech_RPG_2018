/*
** EPITECH PROJECT, 2019
** str_to_word.c
** File description:
** Puigsagur
*/

#include "include/my.h"

char **str_to_word(char **array, char *str, int nb, char z)
{
    array = malloc(sizeof(char *) * (nb + 1));
    for (int i = 0; i <= nb; i += 1)
        array[i] = NULL;
    for (int i = 0; i < nb; i += 1)
        array[i] = my_malloc(250);
    for (int j = 0, x = 0, i = 0; str[i] != 0; i += 1, x += 1) {
        if (str[i] == z && str[i + 1] == z && str[i + 2] == 0)
            break;
        if (str[i] == z && str[i + 1] == 0)
            break;
        if (str[i] == z) {
            x = 0;
            j += 1;
            i += 1;
        }
        array[j][x] = str[i];
    }
    return (array);
}

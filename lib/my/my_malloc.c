/*
** EPITECH PROJECT, 2018
** my_malloc.c
** File description:
** Puigsagur
*/

#include <stdlib.h>

char *my_malloc(int len)
{
    char *str = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++)
        str[i] = 0;
    return (str);
}

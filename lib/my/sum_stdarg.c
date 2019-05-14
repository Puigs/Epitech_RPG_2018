/*
** EPITECH PROJECT, 2018
** sum_stdarg.c
** File description:
** Puigsagur
*/

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int sum_stdarg(int i, int nb, ...)
{
    int result = 0;
    va_list list;

    va_start(list, nb);
    if (i == 0) {
        for (; nb > 0; nb--) {
            result = result + va_arg(list, int);
        }
    }
    if (i == 1) {
        for (; nb > 0; nb--)
            result = result + my_strlen(va_arg(list, char *));
    }
    va_end(list);
    return (result);
}

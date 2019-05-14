/*
** EPITECH PROJECT, 2018
** disp_stdarg.c
** File description:
** Puigsagur
*/

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int my_strlen(char const *str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

int disp_stdarg(char *s, ...)
{
    int count = 0;
    va_list list;

    va_start(list, s);
    for (; s[count] != '\0'; count++) {
        if (s[count] == 'i') {
            my_put_nbr(va_arg(list, int));
            my_putchar('\n');
        } else if (s[count] == 'c') {
            my_putchar(va_arg(list, int));
            my_putchar('\n');
        } else {
            my_putstr(va_arg(list, char *));
            my_putchar('\n');
        }
    }
    va_end(list);
    return (0);
}

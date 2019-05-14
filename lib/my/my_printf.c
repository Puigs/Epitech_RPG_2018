/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** Puigsagur
*/

#include "../../include/struct.h"

static const list_t functions[14] = {
    {'d', &print_int},
    {'i', &print_int},
    {'c', &print_char},
    {'C', &print_char},
    {'s', &print_array},
    {'u', &print_deci},
    {'o', &print_octa},
    {'x', &print_hexa},
    {'X', &print_hexa_maj},
    {'b', &print_binaire},
    {'S', &print_show},
    {'p', &print_point},
    {'%', &print_char},
};

void chose_flags(int count, va_list list, char *s)
{
    if (s[count + 1] == '%') {
        my_putchar('%');
        return;
    }

    for (int i = 0; i <= 14; i++) {
        if (s[count + 1] == functions[i].fp) {
            functions[i].fptr(list);
        }
    }
    for (int i = 7; i <= 11; i++) {
        if (s[count + 1] == '#' && s[count + 2] == functions[i].fp) {
            my_putchar('0');
            my_putchar(s[count + 2]);
            functions[i].fptr(list);
        }
    }
}

int my_printf(char *s, ...)
{
    int count = 0;
    va_list list;

    va_start(list, s);
    while (s[count] != '\0') {
        if (s[count] == '%') {
            chose_flags(count, list, s);
            count++;
        }
        else if (s[count] == 10)
            my_putchar('\n');
        else
            my_putchar(s[count]);
        count++;
    }
    va_end(list);
    return (0);
}

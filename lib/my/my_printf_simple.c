/*
** EPITECH PROJECT, 2018
** my_printf_simple.c
** File description:
** Puigsagur
*/

#include "../../include/struct.h"

void print_int(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void print_char(va_list list)
{
    my_putchar(va_arg(list, int));
}

void print_array(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void print_show(va_list list)
{
    my_show_inv(va_arg(list, char *));
}

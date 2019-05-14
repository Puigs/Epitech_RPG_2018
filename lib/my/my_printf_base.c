/*
** EPITECH PROJECT, 2018
** my_printf_base.c
** File description:
** Puigsagur
*/

#include "../../include/struct.h"

void print_deci(va_list list)
{
    my_put_base(va_arg(list, unsigned int), "0123456789");
}

void print_octa(va_list list)
{
    my_put_base(va_arg(list, unsigned int), "01234567");
}

void print_hexa(va_list list)
{
    my_put_base(va_arg(list, unsigned int), "0123456789abcdef");
}

void print_hexa_maj(va_list list)
{
    my_put_base(va_arg(list, unsigned int), "0123456789ABCDEF");
}

void print_binaire(va_list list)
{
    my_put_base(va_arg(list, unsigned int), "01");
}

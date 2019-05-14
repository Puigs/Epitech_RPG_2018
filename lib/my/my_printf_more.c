/*
** EPITECH PROJECT, 2018
** my_printf_more.c
** File description:
** Puigsagur
*/

#include "../../include/struct.h"

union s_s
{
    void *ptn;
    int  tab[2];
};

void print_point(va_list list)
{
    my_putchar('0');
    my_putchar('x');

    union s_s v;
    v.ptn = va_arg(list, void *);

    my_put_base(v.tab[1], "0123456789abcdef");
    my_put_base(v.tab[0], "0123456789abcdef");
}

int my_put_base(unsigned int nb, char *str)
{
    int base = my_strlen(str);
    int mod = nb % base;
    int di = nb / base;

    if (di != 0) {
        my_put_base(di, str);
    }
    my_putchar(str[mod]);
    return (0);
}

char my_show_inv(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 32 || str[a] >= 127) {
            my_putchar(92);
            my_put_base(str[a], "01234567");
        }
        else
            my_putchar(str[a]);
        a++;
    }
    return (0);
}

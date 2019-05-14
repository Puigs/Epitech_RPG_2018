/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** Puigsagur
*/

#ifndef __STRUCT__
#define __STRUCT__

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

typedef struct list_s
{
    char fp;
    void (*fptr)(va_list);
} list_t;


void print_int(va_list list);
void print_char(va_list list);
void print_array(va_list list);
void print_show(va_list list);
void print_deci(va_list list);
void print_octa(va_list list);
void print_hexa(va_list list);
void print_hexa_maj(va_list list);
void print_binaire(va_list list);
void print_point(va_list list);
int my_put_base(unsigned int nb, char *str);
char my_show_inv(char *str);
int my_strlen(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);

#endif /* __STRUCT__ */

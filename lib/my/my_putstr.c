/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** Puigsagur
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    while (*str != '\0'){
        my_putchar(*str);
        str++;
    }
    return (0);
}

/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Puigsagur
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

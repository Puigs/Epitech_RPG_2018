/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** Puigsagur
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9')
        i++;
    if (str[i] == '\0')
        return (1);
    if (str[i] != '\0')
        return (0);
}

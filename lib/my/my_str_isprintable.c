/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** Puigsagur
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] >= 33 && str[i] <= 126)
        i++;
    if (str[i] == '\0')
        return (1);
    if (str[i] != '\0')
        return (0);
}

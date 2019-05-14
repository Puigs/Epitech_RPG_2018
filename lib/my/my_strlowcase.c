/*
** EPITECH PROJECT, 2018
** my_strlowcase.C
** File description:
** Puigsagur
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

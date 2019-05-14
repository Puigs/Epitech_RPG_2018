/*
** EPITECH PROJECT, 2018
** my_strcapitalize.c
** File description:
** Puigsagur
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[i] >= 97 && str[i] <= 122) {
        str[i] = str[i] - 32;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        while (str[i] >= 20 && str[i] <= 47) {
            i++;
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] = str[i] - 32;
                i++;
            }
        }
        i++;
    }
    return (str);
}

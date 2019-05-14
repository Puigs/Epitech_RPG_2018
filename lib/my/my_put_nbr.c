/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** Puigsagur
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == - 2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 144483648;
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
        return (nb);
    } else {
        my_putchar(nb - my_put_nbr(nb / 10) * 10 + 48);
        return (nb);
    }
    return (0);
}

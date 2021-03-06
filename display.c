/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Functions displaying
*/
#include "my.h"

int     my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb < 10)
		my_putchar(48 + nb);
	if (nb > 9) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	return (0);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str)
{
	for (int i = 0; str[i]; i++)
		my_putchar(str[i]);
}

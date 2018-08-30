/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Calculate the size of a str, a tab
*/
#include "my.h"

int tablen(char **tab)
{
	int tmp	= 0;
	int i =	0;

	while (tab[i] != NULL) {
		tmp += my_strlen(tab[i]);
		i++;
	}
	return(tmp);
}

int my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

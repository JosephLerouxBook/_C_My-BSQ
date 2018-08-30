/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Function counting cols/lines
*/
#include "my.h"

int count_cols(char *str)
{
	int i = 0;

	if (str == NULL)
		return(84);
	while (str[i] != '\n')
		i++;
	return (i);
}

int count_lines(char *str)
{
	int i = 0;
	int count = 0;

	if (str == NULL)
		return (84);
	while (str[i] != '\0') {
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** BSQ
*/
#include "my.h"

void my_show_wordtab(char **tab)
{
	char *str = malloc(sizeof(char) * tablen(tab));
	int j = 0;
	
	for (int i = 0; tab[i] != NULL; i++) {
		for (int y = 0; tab[i][y]; y++) {
			str[j] = tab[i][y];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	my_putstr(str);
}

void my_show_inttab(int **tab)
{
	int i = 0;
	int j = 0;

	while (tab[i] != NULL) {
		while (tab[i][j] != '\n') {
			my_put_nbr(tab[i][j]);
			j++;
		}
		j = 0;
		my_putchar('\n');
		i++;
	}
}

/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Function needed to fill maps (int, algo, ect...)
*/
#include "my.h"
#include "struct.h"

char **str_strstar(char *str, int col, int lin)
{
	char **tab;
	int i = 0;
	int j = 0;
	int k = 0;

	tab = malloc(sizeof(char *) * lin);
	while (i < lin) {
		tab[i] = malloc(sizeof(char) * col);
		while (j < col) {
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		j = 0;
		k++;
		i++;
	}
	tab[i] = NULL;
	return(tab);
}

int **strstar_intstar(char **tab, int col, int lin)
{
	int **hunt_tab;
	int i = 0;
	int j = 0;

	if (!(hunt_tab = malloc(sizeof(int *) * (lin + 1))))
		return(NULL);
	while (i < lin) {
		if (!(hunt_tab[i] = malloc(sizeof(int) * (col + 1))))
			return(NULL);
		while (j < col) {
			if (tab[i][j] == '.')
				hunt_tab[i][j] = 1;
			else if (tab[i][j] == 'o')
				hunt_tab[i][j] = 0;
			j++;
		}
		hunt_tab[i][j] = '\n';
		j = 0;
		i++;
	}
	hunt_tab[i] = NULL;
	return(hunt_tab);
}

void get_squared(char **map, coord biggest)
{
	int loopx = biggest.value;
	int loopy = biggest.value;
	int x = biggest.x;
	int y = biggest.y;

	while  (loopx > 0) {
		while (loopy > 0) {
			map[x][y] = 'x';
			loopy--;
			y--;
		}
		y = biggest.y;
		loopy = biggest.value;
		loopx--;
		x--;
	}
}

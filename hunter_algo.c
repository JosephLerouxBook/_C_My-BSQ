/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** FUnctions needed to make the algorithm work
*/
#include "my.h"

void jump_first_line(int fd)
{
	char buffer;

	while (read(fd, &buffer, 1)) {
		if (buffer == '\n')
			return;
	}
}

void  get_smallest(int **tab, int x, int y)
{
	int dia = tab[x - 1][y - 1];
	int up = tab[x - 1][y];
	int left = tab[x][y - 1];
	int actu = tab[x][y];
	
	if (dia <= up && dia <= left) 
		tab[x][y] = dia + 1;
	else if (up <= left && up <= dia)
		tab[x][y] = up + 1;
	else if (left <= dia && left <= up)
		tab[x][y] = left + 1;
	return;
}

void hunt_algo(int **map, int col, int lin)
{
	int x = 1;
	int y = 1;

	while (x < lin) {
		while (y < col) {
			if (map[x - 1][y - 1] != 0 && map[x - 1][y] != 0 &&
			    map[x][y - 1] != 0 &&
			    map[x][y] != 0) {
				get_smallest(map, x, y);
			}
			y++;
		}
		y = 1;
		x++;
	}
	return;
}

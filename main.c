/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** main + fonction principale
*/
#include "my.h"
#include "struct.h"

coord  get_coord(int **map, int col, int lin)
{        
	int x = 0;
	int y = 0;
	coord biggest;

	biggest.x = 0;
	biggest.y = 0;
	biggest.value = 0;
	while (x < lin) {
		while (y < col) {
			if (map[x][y] >= biggest.value) {
				biggest.value = map[x][y];
				biggest.x = x;
				biggest.y = y;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (biggest);
}

void bsq(char *buff)
{
	int col = count_cols(buff);
	int lin = count_lines(buff);
	char **map_tab = str_strstar(buff, col, lin);
	int **hunt_map = strstar_intstar(map_tab, col, lin);

	hunt_algo(hunt_map, col, lin);
	coord biggest = get_coord(hunt_map, col, lin);

	biggest.value = hunt_map[biggest.x][biggest.y];
	get_squared(map_tab, biggest);
	my_show_wordtab(map_tab);
}


int main(int ac, char **av)
{
	if (ac < 2)
		return;
	else {
		struct stat sta;
		
		if (stat(av[1], &sta) == -1) {
			my_putstr("incorect arguments");
			return;
		}
		char buff[sta.st_size - 1];
		int fd = open(av[1], O_RDONLY);

		jump_first_line(fd);
		read(fd, &buff, sta.st_size);
		bsq(buff);
	}	
}

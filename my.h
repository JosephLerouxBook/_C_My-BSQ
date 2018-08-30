/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** .h with all fonction + include
*/
#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>

#include "struct.h"

//count_col_lin.c
int count_cols(char *str);
int count_lines(char *str);
//display.c
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char *str);
//display_tab.c
void my_show_wordtab(char **tab);
void my_show_inttab(int **tab);
//hunter_algo.c
void jump_first_line(int fd);
void get_smallest(int **tab, int x, int y);
void hunt_algo(int **map, int col, int lin);
//fill_tabs.c
char **str_strstar(char *str, int col, int lin);
int **strstar_intstar(char **tab, int col, int lin);
void get_squared(char **map, coord biggest);
//get_len.c
int tablen(char **tab);
int my_strlen(char *str);

#endif /* MY_H_ */ 

/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>
#include "my.h"

void display_biggest_square(square *coor)
{
	coor->i_min = coor->i - (coor->a - 1);
	coor->j_min = coor->j - (coor->a - 1);

	for(; coor->i_min <= coor->i; coor->i_min++) {
		for(coor->j_min = coor->j - (coor->a - 1); coor->j_min <= coor->j; coor->j_min++)
			coor->array[coor->i_min][coor->j_min] = 'x';
	}
}

void convert_to_int(square *coor)
{

	for (int i = 0; i < coor->row; i++) {
		for (int j = 0; j < coor->col; j++) {
			if (coor->array[i][j] == '.')
				coor->int_array[i][j] = 1;
			else
				coor->int_array[i][j] = 0;
		}
	}
}

void compare_int(square *coor)
{
	for (int i = 0; i < coor->row; i++) {
		for (int j = 0; j < coor->col; j++) {
			if ((coor->int_array[i][j] != 0 && i == 0 && j >= 0)
			|| (coor->int_array[i][j] != 0 && i >= 0 && j == 0))
				coor->int_array[i][j] = 1;
			if (coor->int_array[i][j] != 0 && i > 0 && j > 0) {
	coor->int_array[i][j] = coor->int_array[i][j] + smallest(coor->int_array[i][j-1],
			coor->int_array[i-1][j-1],coor->int_array[i-1][j]);
	coor->b = coor->size;
	coor->size = coor->int_array[i][j];
			}
			if(coor->size > coor->a) {
				coor->a = coor->int_array[i][j];
				coor->i = i;
				coor->j = j;
			}
		}
	}
}

void ini_struct(square *coor, char *str)
{
	coor->n = 0;
	coor->s = 0;
	coor->i_min = 0;
	coor->j_min = 0;
	coor->a = 0;
	coor->b = 0;
	coor->size = 0;
	coor->i = 0;
	coor->j = 0;
	coor->nb_col = 1;
	coor->nb_row = 1;
	coor->row = fs_get_number_from_first_line(str);
	coor->col = fs_print_first_line(str);
	coor->array = load_2d_arr_from_file(str, coor->row, coor->col);
	coor->int_array = mem_alloc_2d_array_int(coor->row, coor->col);
}

int big_square_t (char * str)
{
	square *coor = malloc(sizeof(square));

	ini_struct(coor, str);
	convert_to_int(coor);
	compare_int(coor);
	display_biggest_square(coor);
	condition(coor);
	condition_next(coor);
	for (int i = 0; i < coor->row; i++) {
		write(1, coor->array[i], coor->col);
		write(1, "\n", 1);
	}
	free(coor);
	return (0);
}

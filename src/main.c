/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"

void display_biggest_square(square *coor)
{
	coor->i_min = coor->i - (coor->a - 1);
	coor->j_min = coor->j - (coor->a - 1);

	for(; coor->i_min <= coor->i; coor->i_min++) {
		for(coor->j_min = coor->j - (coor->a - 1);
		coor->j_min <= coor->j; coor->j_min++)
			coor->array[coor->i_min][coor->j_min] = 'x';
	}
}

void convert_to_int(square *coor)
{
	for (int i = 0; i < coor->row; i++)
		for (int j = 0; j < coor->col; j++)
			cond_convert_int(coor, i, j);
}

void compare_int(square *coor)
{
	for (int i = 0; i < coor->row; i++)
		for (int j = 0; j < coor->col; j++)
			cond_compare_int (coor, i, j);
}

void ini_struct(square *coor, char *str)
{
	coor->temp = 0;
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

int main (int argc, char **argv)
{
	square *coor = malloc(sizeof(square));
	char *str;

	if (argc != 2)
		exit(84);
	str = argv[1];
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

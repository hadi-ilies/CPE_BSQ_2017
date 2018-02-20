/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"

void cond_convert_int(square *coor, int i , int j)
{
	if (coor->array[i][j] == '.')
		coor->int_array[i][j] = 1;
	else
		coor->int_array[i][j] = 0;
}

void cond_compare_int(square *coor, int i , int j)
{
	if ((coor->int_array[i][j] != 0 && i == 0 && j >= 0)
	|| (coor->int_array[i][j] != 0 && i >= 0 && j == 0))
		coor->int_array[i][j] = 1;
	if (coor->int_array[i][j] != 0 && i > 0 && j > 0) {
		coor->int_array[i][j] = coor->int_array[i][j]
		+ smallest(coor->int_array[i][j-1],
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

void cond_cond(square *coor, int i)
{
	if (coor->array[i][0] == '.' && coor->temp == 0) {
		write(1, "x\n", 2);
		coor->temp++;
	} else {
		write(1, coor->array[i], 1);
		write(1, "\n", 1);
	}
}

void cond_condition_next(square *coor, int j)
{
	if (coor->col == 1 && coor->array[0][0] == '.') {
		write(1, "x\n", 2);
		exit(0);
	} if (coor->col == 1 && coor->array[0][0] == 'o') {
		write(1, "o\n", 2);
		exit(0);
	} if (coor->array[0][j] == '.' && coor->temp == 0) {
		write(1, "x", 1);
		coor->temp++;
	} else
		my_putchar(coor->array[0][j]);
}

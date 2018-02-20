/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"

void condition(square *coor)
{
	if (coor->row > 1 && coor->col == 1) {
		for (int i = 0; i < coor->row; i++) {
			cond_cond(coor, i);
		}
		exit(0);
	}
}

void condition_next(square *coor)
{
	if (coor->row == 1 && coor->col >= 1) {
		for (int j = 0; j < coor->col; j++)
			cond_condition_next(coor, j);
		write(1, "\n", 1);
	exit(0);
	}
}

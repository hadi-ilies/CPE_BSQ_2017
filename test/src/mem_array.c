/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
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

int fs_open_file (char const *filepath)
{
	int file = 0;

	file = open(filepath, O_RDONLY);
	if(file == -1)
		exit(84);
	else
		return (file);
}

int **mem_alloc_2d_array_int(int nb_rows, int nb_cols)
{
	int **array;

	array = malloc(sizeof(int *) * nb_rows);
	for (int i = 0; i < nb_rows; i++)
		array[i] = malloc(sizeof(int) * nb_cols);
	return (array);
}

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
	char **array;

	array = malloc(sizeof(char *) * nb_rows);
	for (int i = 0; i < nb_rows; i++)
		array[i] = malloc(sizeof(char) * nb_cols);

	return (array);
}

int smallest(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if(b <= a && b <= c)
		return (b);
	else
		return (c);
}

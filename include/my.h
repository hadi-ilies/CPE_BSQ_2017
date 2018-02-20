/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/sysmacros.h>
#include <dirent.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>

typedef struct  {
	int temp;
	int s;
	int n;
	int i_min;
	int j_min;
	int a;
	int b;
	int size;
	int i;
	int j;
	int col;
	int row;
	int nb_col;
	int nb_row;
	char **array;
	int **int_array;
} square;

void condition_next(square *coor);
void condition(square *coor);
int my_atoi(char *str);
void my_putchar(char c);
int **mem_alloc_2d_array_int(int nb_rows, int nb_cols);
int my_strlen(char const *str);
int my_printf(const char *format, ...);
int fs_get_number_from_first_line(char const *filepath);
int fs_print_first_line(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
int is_square_of_size(char **map, square *coor, int size);
int size_biggest_square(char **map, int row, int col, int x, int y);
void ini_struct(square *coor, char *str);
int find_the_biggest_square(square *coor);
void convert_to_int(square *coor);
int smallest (int a, int b, int c);
void compare_int(square *coor);
void merge_sort (int *result, int *array1, int *array2, int size1, int size2);
int sort_b(int *array1, int size);
void display_biggest_square(square *coor);
int fs_open_file (char const *filepath);
void cond_convert_int(square *coor, int i, int j);
void cond_compare_int(square *coor, int i, int j);
void cond_cond(square *coor, int i);
void cond_condition_next(square *coor, int j);

/*
** EPITECH PROJECT, 2017
**
** File description:
**
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

static char *dir_maps = "mouli_maps/";
static char *dir_maps_solved = "mouli_maps_solved/";

void big_square_t(char *file_name);

char *get_str_from_file(char *file_name)
{
	int fd = open(file_name, O_RDONLY);
	char *tab;
	struct stat file_stat;
	int size;

	stat(file_name, &file_stat);
	size = file_stat.st_size;
	tab = malloc(sizeof(char) * (size + 1));
	read(fd, tab, size);
	close(fd);
	return (tab);
}

char *my_cat(char *a, char *b)
{
	int size = strlen(a) + strlen(b);
	char *c = malloc(sizeof(char) * (size + 1));
	int i;

	for (i = 0; a[i] != '\0'; i++)
		c[i] = a[i];
	for (int j = 0; b[j] != '\0'; j++)
		c[i + j] = b[j];
	c[size] = '\0';
	return (c);
}

Test(units, test1)
{
	char *file_name = "intermediate_map_34_137_empty";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test2)
{
	char *file_name = "intermediate_map_34_137_filled";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test3)
{
	char *file_name = "intermediate_map_34_137_with_obstacles_25pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test4)
{
	char *file_name = "intermediate_map_34_137_with_obstacles_50pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test5)
{
	char *file_name = "intermediate_map_34_137_with_obstacles_75pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test6)
{
	char *file_name = "intermediate_map_97_21_empty";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test7)
{
	char *file_name = "intermediate_map_97_21_filled";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test8)
{
	char *file_name = "intermediate_map_97_21_with_obstacles_25pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test9)
{
	char *file_name = "intermediate_map_97_21_with_obstacles_50pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test10)
{
	char *file_name = "intermediate_map_97_21_with_obstacles_75pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test11)
{
	char *file_name = "intermediate_map_100_100";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test12)
{
	char *file_name = "intermediate_map_187_187_empty";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test13)
{
	char *file_name = "intermediate_map_187_187_filled";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test14)
{
	char *file_name = "intermediate_map_187_187_with_obstacles_25pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test15)
{
	char *file_name = "intermediate_map_187_187_with_obstacles_50pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test16)
{
	char *file_name = "intermediate_map_187_187_with_obstacles_75pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test17)
{
	char *file_name = "intermediate_map_200_200";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test25)
{
	char *file_name = "intermediate_map_10000_10000";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test26)
{
	char *file_name = "intermediate_map_empty_corners";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test27)
{
	char *file_name = "intermediate_map_filled_corners";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test28)
{
	char *file_name = "intermediate_map_one_column_with_obstacles_25pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test29)
{
	char *file_name = "intermediate_map_one_column_with_obstacles_50pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test30)
{
	char *file_name = "intermediate_map_one_column_with_obstacles_75pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test31)
{
	char *file_name = "intermediate_map_one_empty_box";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test32)
{
	char *file_name = "intermediate_map_one_empty_column";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test33)
{
	char *file_name = "intermediate_map_one_empty_line";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test34)
{
	char *file_name = "intermediate_map_one_filled_box";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test35)
{
	char *file_name = "intermediate_map_one_filled_column";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test36)
{
	char *file_name = "intermediate_map_one_filled_line";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test37)
{
	char *file_name = "intermediate_map_one_line_with_obstacles_25pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test38)
{
	char *file_name = "intermediate_map_one_line_with_obstacles_50pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

Test(units, test39)
{
	char *file_name = "intermediate_map_one_line_with_obstacles_75pc";
	char *file = my_cat(dir_maps, file_name);
	char *file_solved = my_cat(dir_maps_solved, file_name);
	char *s = get_str_from_file(file_solved);

	cr_redirect_stdout();
	big_square_t(file);
	cr_assert_stdout_eq_str(s);
	free(file);
	free(file_solved);
	free(s);
}

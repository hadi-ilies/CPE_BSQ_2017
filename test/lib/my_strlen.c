/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i) ;
}

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: an integer representing the number of arguments passed to the program
 * @av: a double pointer to an array of strings representing the arguments
 * passed to the program
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}


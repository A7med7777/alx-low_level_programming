#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + sign * (s[i] - '0');
		i++;
	}

	return (num);
}


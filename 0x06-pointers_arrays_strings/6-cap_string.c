#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && (i == 0 || _is_sep(s[i - 1], sep)))
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}

/**
 * _is_sep - checks if a character is a separator
 * @c: the character to check
 * @sep: the string of separators
 * Return: 1 if c is a separator, 0 otherwise
 */
int _is_sep(char c, char *sep)
{
	int i = 0;

	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}

	return (0);
}


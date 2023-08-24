#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	int sep = 1;
	char c;

	while (s[i] != '\0')
	{
		c = s[i];
		if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
				c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
				c == ')' || c == '{' || c == '}')
		{
			sep = 1;
		}
		else if (sep == 1)
		{
			if (c >= 'a' && c <= 'z')
			{
				s[i] = c - 32;
			}
			sep = 0;
		}
		i++;
	}
	return (s);
}


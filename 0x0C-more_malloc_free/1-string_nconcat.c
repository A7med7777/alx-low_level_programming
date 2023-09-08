#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 * Return: a pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}


#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}


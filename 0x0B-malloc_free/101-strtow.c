#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: pointer to a string that needs to be split into words
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	wc = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			for (j = i; str[j] != ' ' && j < len; j++)
				;
			words[wc - 1] = malloc((j - i + 1) * sizeof(char));
			if (words[wc - 1] == NULL)
			{
				for (k = 0; k < wc - 1; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(words[wc - 1], &str[i], j - i);
			words[wc - 1][j - i] = '\0';
			i = j;
		}
	}
	words[wc] = NULL;

	return (words);
}


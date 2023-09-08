#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min + i;

	return (array);
}


#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 *	or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num << 1;
			if (b[i] == '1')
				num = num + 1;
		}
		else
			return (0);
		i++;
	}

	return (num);
}

#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int m;
	int i, j, digit, power;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	i = 0;
	j = m;
	while (j > 0)
	{
		i++;
		j /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		power = 1;
		for (digit = 0; digit < j; digit++)
		{
			power *= 10;
		}
		_putchar((m / power) % 10 + '0');
	}
	if (i == 0)
	{
		_putchar('0');
	}
}


#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the
 * Fibonacci sequence
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}


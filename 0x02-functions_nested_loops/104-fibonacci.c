#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	unsigned long a1, a2, b1, b2, c1, c2;

	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;
	printf("%lu, %lu", a2, b2);
	for (i = 0; i < 96; i++)
	{
		c1 = a1 + b1 + ((a2 + b2) / 1000000000);
		c2 = (a2 + b2) % 1000000000;
		printf(", %lu%09lu", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	printf("\n");
	return (0);
}


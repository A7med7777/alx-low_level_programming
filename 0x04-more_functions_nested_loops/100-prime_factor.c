#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
	long i, limit;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	limit = sqrt(n);
	for (i = 3; i <= limit; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 on success
 */
int main(void)
{
	long n = 612852475143;
	long i, max = -1;

	while (n % 2 == 0)
	{
		n /= 2;
		max = 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			if (is_prime(i))
			{
				max = i;
			}
		}
	}
	if (is_prime(n) && n > max)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}


#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to compute the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (high < low)
	{
		return (-1);
	}

	mid = (low + high) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
}


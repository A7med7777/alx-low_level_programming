#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	return (palindrome_helper(s, end));
}

/**
 * palindrome_helper - helper function for is_palindrome
 * @start: pointer to the start of the string
 * @end: pointer to the end of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (*start != *end)
	{
		return (0);
	}
	else
	{
		return (palindrome_helper(start + 1, end - 1));
	}
}


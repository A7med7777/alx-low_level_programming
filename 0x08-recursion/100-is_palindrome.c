#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (*s != *(s + len - 1))
	{
		return (0);
	}
	else
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}
}


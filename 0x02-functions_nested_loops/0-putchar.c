#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * main - prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}

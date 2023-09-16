#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char sep = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (sep)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				sep = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				sep = 1;
				break;
			default:
				sep = 0;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

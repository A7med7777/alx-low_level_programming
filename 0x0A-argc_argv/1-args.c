#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}


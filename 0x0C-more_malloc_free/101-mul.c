#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit(num1) || !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}


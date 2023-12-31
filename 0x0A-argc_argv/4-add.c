#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to the variable n each time
 * it is executed and prints whether the number stored in n is positive
 * or negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	printf("%d ", n);

	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}

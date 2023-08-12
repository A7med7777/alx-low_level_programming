#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to the variable n each time
 * it is executed and prints the last digit of the number stored in n.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
		printf("and is greater than 5\n");
	else if (last == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}

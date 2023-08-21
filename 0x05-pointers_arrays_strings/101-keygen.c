#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[100];
	int sum = 0, i = 0, random;

	srand(time(NULL));

	while (sum < 2772)
	{
		random = rand() % (126 - 32 + 1) + 32;
		password[i] = random;
		sum += random;
		i++;
	}

	password[i - 1] = 2772 - sum + random;
	password[i] = '\0';

	printf("%s\n", password);

	return (0);
}


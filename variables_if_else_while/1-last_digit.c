#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n,

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	nbr = n % 10;

	if (n > 5)
		printf("%d is greater than 5\n", n);

	else if (n == 0)
		printf(" is 0 and is 0\n");

	else if (n < 6)
		printf("n and is less than 6 and not 0\n");

	return (0);
}

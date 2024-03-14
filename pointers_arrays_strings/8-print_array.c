#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: (int) array
 * @n: (int) nb
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>


/**
 * reverse_array - Reverse content of an array
 * @a: array
 * @n: size array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

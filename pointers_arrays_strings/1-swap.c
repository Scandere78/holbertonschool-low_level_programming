#include "main.h"


/**
 * swap_int - Update pointer
 * @a: (int) A swap to B
 * @b: (int) B swap to A
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

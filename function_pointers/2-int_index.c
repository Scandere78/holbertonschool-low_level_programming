#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: int ptr
 * @size: int
 * @cmp: int function ptr
 *
 * Return: int
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array == 0 || size < 1 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

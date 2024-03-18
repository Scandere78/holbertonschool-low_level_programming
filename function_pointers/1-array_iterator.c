#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 *@array: pointeur to an array
 *@size: size of an array
 *@action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

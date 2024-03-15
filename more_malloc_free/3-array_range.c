#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create array of int
 * @min: Min
 * @max: Max
 * Return: Pointer new allocated space
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, ii;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	ii = 0;
	for (i = min; i <= max; i++)
	{
		ptr[ii] = i;
		ii++;
	}
	return (ptr);
}

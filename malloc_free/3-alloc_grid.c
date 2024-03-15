#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Return a pointer to a 2 dimensional array of int
 * @width: Width
 * @height: Height
 * Return: Pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, ii;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i != 0)
			{
				free(ptr[--i]);
			}
			free(ptr);
			return (NULL);
		}
		else
		{
			for (ii = 0; ii < width; ii++)
			{
				ptr[i][ii] = 0;
			}
		}
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars with specific char
 * @size: Size
 * @c: Character
 * Return: Pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

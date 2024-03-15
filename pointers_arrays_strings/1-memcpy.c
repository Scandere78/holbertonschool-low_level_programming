#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination Buffer
 * @src: Constant bytes
 * @n: number
 * Return: pointer of @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (ptr);
}

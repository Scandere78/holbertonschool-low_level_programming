#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		*dest = src[v];
		dest++;
	}
	return (dest);
}

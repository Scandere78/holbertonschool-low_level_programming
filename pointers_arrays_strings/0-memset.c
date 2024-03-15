#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Buffer
 * @b: Constant byte
 * @n: number
 * Return: pointer of @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}

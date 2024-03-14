#include "main.h"


/**
 * _strncpy - Copies a string
 * @dest: text one
 * @src: text two
 * @n: number of concatenate
 * Return: (char) result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

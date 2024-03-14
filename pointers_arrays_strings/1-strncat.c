#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: text one
 * @src: text two
 * @n: number of concatenate
 * Return: (char) result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int offset = _strlen(dest);

	while (i < n)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[offset + i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: text one
 * @src: text two
 * Return: (char) result
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int offset = _strlen(dest);

	while (src[i])
	{
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

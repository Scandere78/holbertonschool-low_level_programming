#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int length = _strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		s++;
		if (s[i] == c)
		{		return (s);
		}
	}
return (NULL);
}

/**
 * _strlen - return the length of a string
 * @s: length of a string
 * Return: void
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

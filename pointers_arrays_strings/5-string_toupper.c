#include "main.h"
#include <stdio.h>


/**
 * string_toupper - Change all lowercase letters to uppercase
 * @t: char
 * Return: (char)
 */
char *string_toupper(char *t)
{
	int i, tmp;
	int size = _strlen(t);

	for (i = 0; i < size; i++)
	{
		tmp = t[i];
		if (tmp >= 97 && tmp <= 122)
		{
			tmp -= 32;
		}
		t[i] = tmp;
	}
	return (t);
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

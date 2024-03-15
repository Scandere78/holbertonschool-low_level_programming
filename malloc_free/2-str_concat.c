#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings
 * @s1: Text 1
 * @s2: Text 2
 * Return: Pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, ii;
	int size, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = (size1 * sizeof(char)) + (size2 * sizeof(char));

	ptr = malloc(size + sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (ii = 0; ii < size2; ii++)
	{
		ptr[ii + size1] = s2[ii];
	}
	ptr[size1 + size2] = '\0';
	return (ptr);
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

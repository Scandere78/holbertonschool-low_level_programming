#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer first occurence of @c in @s, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
		{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

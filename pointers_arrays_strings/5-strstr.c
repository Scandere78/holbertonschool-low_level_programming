#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - search the first occurence between strings
 * @haystack: string
 * @needle: sustring
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

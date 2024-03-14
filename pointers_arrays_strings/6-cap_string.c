#include "main.h"
#include <stdio.h>


/**
 * cap_string - Capitalizes all words
 * @t: char
 * Return: (char)
 */
char *cap_string(char *t)
{
	int i, ii, tmp, last;
	int size = _strlen(t);
	int spcs[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; i < size; i++)
	{
		last = t[i - 1];
		tmp = t[i];

		if (tmp >= 97 && tmp <= 122)
		{
			if (i == 0)
			{
				tmp -= 32;
			}
			else
			{
				for (ii = 0; ii < 13; ii++)
				{
					if (spcs[ii] == last)
					{
						tmp -= 32;
						break;
					}
				}
			}
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
}}

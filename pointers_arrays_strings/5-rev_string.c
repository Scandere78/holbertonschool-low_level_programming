#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: (char) text
 * Return: void
 */
void rev_string(char *s)
{
	int _len = _strlen(s);
	int i;
	char c = s[0];

	for (i = 0; i < _len; i++)
	{
		_len--;
		c = s[i];
		s[i] = s[_len];
		s[_len] = c;
	}
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

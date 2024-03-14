#include "main.h"

/**
 * puts_half - Prints half of string
 * @str: (char) text
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = length / 2; i < length; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
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

	if ((length % 2) != 0)
	{
		length++;
	}

	return (length);
}

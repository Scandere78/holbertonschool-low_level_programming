#include "main.h"

/**
 * puts2 - Prints every other character
 * @str: (char) text
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		if ((i % 2) == 0)
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
	return (length);
}

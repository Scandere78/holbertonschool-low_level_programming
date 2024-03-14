#include "main.h"


/**
 * print_rev - Prints a string reverse
 * @s: (char) text
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
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

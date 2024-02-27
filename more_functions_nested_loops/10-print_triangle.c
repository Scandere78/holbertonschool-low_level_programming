#include "main.h"

/**
 * print_triangle - Draw triangle on the terminal
 * @size: size of the square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 1; l <= size; l++)
	{
		for (c = 1; c <= size; c++)
		{
			if ((size - c) < l)
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

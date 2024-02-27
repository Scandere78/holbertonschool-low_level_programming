#include "main.h"

/**
 * print_square - Draw square on the terminal
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, ii;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (ii = 1; ii <= size; ii++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

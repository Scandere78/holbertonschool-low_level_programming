#include "main.h"

/**
 * print_square - Draw square on the terminal
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; a <= size; i++)
	{
		for (b = 1; b <= size; ii++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

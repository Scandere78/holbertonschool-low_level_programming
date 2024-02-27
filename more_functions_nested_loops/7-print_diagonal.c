#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line - Print the 9 times table, start by 0
 * @n: the number of times a character should be printed
 * Return: 0 for success
  */
void print_diagonal(int n)
{
	int h;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (h = 0 ; h < n ; h++)
	{
		for (l = 0 ; l < n ; l++)
		{
			if (h == l)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}

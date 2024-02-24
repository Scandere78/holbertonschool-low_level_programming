#include <stdio.h>
#include "main.h"

/**
 * times_table - Print the 9 times table, start by 0
 *
 * Return: void
  */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (a = 0 ; a < 10 ; a++)
		{
			b = a * c;

			if (b < 10)
			{
				if (a != 0)
				{
					_putchar(' ');
				}

				_putchar((b % 10) + '0');

				} else
				{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
				}
			if (a != 9)
			{

			_putchar(',');
			_putchar(32);
			}
		}
		_putchar('\n');
	}

}

#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		if (i != 2 && i != 4)
			putchar(i + '0');
	putchar('\n');
}

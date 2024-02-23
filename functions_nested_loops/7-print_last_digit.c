#include "main.h"

/**
 * print_last_digit - print last digit
 *@i: function parameter to be checked
 * Return: lastd;
 */

int print_last_digit(int i)
{
	int lastd;

	lastd = i % 10;
	if (i < 0)
		lastd = -lastd;
	_putchar(lastd + '0');
	return (lastd);
}

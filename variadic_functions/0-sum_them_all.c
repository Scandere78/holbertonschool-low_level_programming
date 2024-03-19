#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all arguments
 * @n: Number of argument to count
 *
 * Return: (int) Result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list listes;
	int resultat = 0;
	unsigned int i;

	va_start(listes, n);

	if ( n == 0)
	{
		return (0);
	}
	
	for (i = 0; i < n; i++);
	{
		resultat += va_arg(listes, int);
	}

	va_end(list);
	return (sum);
}

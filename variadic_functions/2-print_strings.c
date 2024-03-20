#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - on print des strings
 * @separator: le separateur
 * @n: nombre de parametres
 * @...: autres parametres variadics
 * Return: Null
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list liste;
	char *strng;

	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		strng = va_arg(liste, char*);

		if (separator == NULL || i == (n - 1))
			separator = "";
		if (strng == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", strng, separator);
	}
	va_end(liste);
	printf("\n");
}

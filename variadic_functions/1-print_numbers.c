#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - imprime les nombres suivis d'une nouvelle ligne.
 * @separator: la chaîne à imprimer entre les nombres
 * @n: le nombre d'entiers passés à la fonction
 *
 * Retour: rien.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");

}

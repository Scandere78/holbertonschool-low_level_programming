#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_character - Print a char
 * @args: List args
 */
void print_character(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print a int
 * @args: List args
 */
void print_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: List args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a char *
 * @args: List args
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print anything
 * @format: Format of arguments to print
 */
void print_all(const char * const format, ...)
{
	int i = 0, ii = 0;
	va_list args;
	print_t types[] = {
		{'c', print_character},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i])
	{
		ii = 0;
		while (ii < 4)
		{
			if (format[i] == types[ii].letter)
			{
				printf("%s", separator);
				types[ii].f(args);
				separator = ", ";
			}
			ii++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


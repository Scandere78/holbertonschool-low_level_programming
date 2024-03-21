#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_format - Struct for print formats
 * @letter: The format specifier
 * @func: The function pointer corresponding to the specifier
 */

typedef struct print_format
{
	char letter;
	void (*func)(va_list);
} print_format_t;

/**
 * print_char - Print a character
 * @args: The argument list
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print an integer
 * @args: The argument list
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: The argument list
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string
 * @args: The argument list
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	return;
	}
		printf("%s", str);
}

/**
 * print_all - Print anything
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, ii;
	char *sep = "";

	print_format_t types[] = 
	{
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		ii = 0;
		while (types[ii].letter != '\0')
		{
			if (format[i] == types[ii].letter)
			{
				printf("%s", sep);
				types[ii].func(args);
				sep = ", ";
					
				break;
			}
			ii++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print name of Bob
 * @name: name of the person
 * @f: pointeur
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

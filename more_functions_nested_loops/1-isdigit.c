#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: parameter to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

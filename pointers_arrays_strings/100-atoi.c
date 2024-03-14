#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: (char) text
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int number = 0;
	int sign = -1;
	int checked = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number -= s[i] - '0';
			checked = 1;
		}
		else if (checked == 1)
		{
			break;
		}
	}
	number *= sign;
	return (number);
}

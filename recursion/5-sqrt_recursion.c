#include "main.h"

/**
 * _sqrt_recursion - Natural square root of number
 * @n: size
 * Return: (int) number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (__sqrt(n, 0));
}

/**
 * __sqrt - Operation
 * @n: size
 * @i: index
 * Return: (int) number
 */
int __sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (__sqrt(n, i + 1));
}

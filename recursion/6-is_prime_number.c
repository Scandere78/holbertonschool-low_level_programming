#include "main.h"

/**
 * is_prime_number - Check prime number
 * @n: number
 * Return: (int) result
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime_number(2, n));
}

/**
 * check_prime_number - Check
 * @i: index
 * @n: number
 * Return: (int) result
 */
int check_prime_number(int i, int n)
{
	if (n == i)
	{
		return (1);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	return (check_prime_number(i + 1, n));
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Sum two number
 * @a: Number 1
 * @b: NUmber 2
 * Return: (int) result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference two number
 * @a: Number 1
 * @b: NUmber 2
 * Return: (int) result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product two number
 * @a: Number 1
 * @b: NUmber 2
 * Return: (int) result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division two number
 * @a: Number 1
 * @b: Number 2
 * Return: (int) result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo two number
 * @a: Number 1
 * @b: NUmber 2
 * Return: (int) result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

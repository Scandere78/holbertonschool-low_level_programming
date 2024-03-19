#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start program
 * @argc: Nb of arguments
 * @argv: Arguments
 * Return: (int)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int a, int b);
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = f(a, b);

	printf("%d\n", result);
	return (0);
}

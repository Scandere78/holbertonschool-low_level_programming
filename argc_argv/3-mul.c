#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start program
 * @argc: Count argument
 * @argv: Array argument
 * Return: (int) Success
 */
int main(int argc, char *argv[])
{
	int a, b;
	(void)argc;

	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

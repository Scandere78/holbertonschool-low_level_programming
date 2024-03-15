#include "main.h"
#include <stdio.h>

/**
 * main - Start program
 * @argc: Count argument
 * @argv: Array argument
 * Return: (int) Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

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
	printf("%s\n", argv[argc - 1]);
	return (0);
}

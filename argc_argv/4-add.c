#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Start program
 * @argc: Count argument
 * @argv: Array argument
 * Return: (int) Success
 */
int main(int argc, char *argv[])
{
	int i, check;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		check = is_number(argv[i]);
		if (check == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}

/**
 * is_number - Check is a number valid
 * @s: argument
 * Return: (int) check
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

#include "main.h"

/**
 * _strspn - Get the length prefix substring
 * @s: String
 * @accept: Only of bytes accepted
 * Return: Number of bytes in @s, in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int accept_length = _strlen(accept);
	int i = 0;


	while (*s != '\0')
	{
		for (i = 0; i < accept_length; i++)
		{
			if (accept[i] == *s)
			{
				length++;
				break;
			}
		}
		s++;
		if (accept[i] == '\0')
		{
			break;
		}
	}
	return (length);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

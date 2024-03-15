#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	{

		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n;j++)
	{
		concat[i++] = s2[j];
	}

	concat[i] = '\0';
	return (concat);

}

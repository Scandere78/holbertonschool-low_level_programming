#include "main.h"
#include <stdio.h>


/**
 * leet - Encode a string into 1337
 * @t: char
 * Return: (char)
 */
char *leet(char *t)
{
	int i, ii, tmp, l1, l2, nb;
	int spcs[][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};

	for (i = 0; t[i] != '\0'; i++)
	{
		tmp = t[i];

		for (ii = 0; ii < 5; ii++)
		{
			l1 = spcs[ii][0];
			l2 = spcs[ii][1];
			nb = spcs[ii][2];

			if (l1 == tmp || l2 == tmp)
			{
				tmp = nb;
			}
		}
		t[i] = tmp;
	}
	return (t);
}

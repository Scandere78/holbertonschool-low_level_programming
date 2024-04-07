#include "main.h"

/* Not understand task!! */
/**
 * flip_bits - Return number of bits need to flip to get one number to another
 * @n: Number
 * @m: M
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_r = n ^ m;
	unsigned int count = 0;

	while (xor_r)
	{
		count += xor_r & 1;
		xor_r >>= 1;
	}
	return (count);
}

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int excl_val = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excl_val >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

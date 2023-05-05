#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: starting from 0 of the bit you want
 *
 * Return:  value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_n;

	if (index > 63)
		return (-1);

	bit_n = (n >> index) & 1;

	return (bit_n);

}

#include "main.h"

/**
 * get_bit - gets value of bit at an index
 * @n: number to search
 * @index: index of bit
 *
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}

#include "main.h"

/**
 * binary_to_uint - coverting a binary to unsigned int
 * @b: string binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		x = x * 2 + (b[i] - '0');
	}

	return (x);
}

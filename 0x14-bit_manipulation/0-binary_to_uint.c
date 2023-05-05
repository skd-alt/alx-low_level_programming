#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing binary chars
 *
 * Return: Decimal or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	int multi = 1;
	int count;
	unsigned int num;

	if (!b)
		return (0);

	while (b[len])
		len++;

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		count = len - i - 1;
		while (count > 0)
		{
			multi *= 2;
			count--;
		}

		num += (b[i] - '0') * multi;
		i++;
		multi = 1;
	}

	return (num);
}

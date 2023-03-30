#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;
	int *num, j, i;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = n;
	}
	i = n1;
	j = 0;
	while (i / 10 != 0)
	{
		num[j] = ((i / 10) % 10);
		i = i / 10;
		j++;
	}
	if (j > 1)
		for (k = j; k > 0; k--)
			_putchar(num[k - 1] + '0');


	_putchar((n1 % 10) + '0');
}

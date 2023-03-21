#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, num2, num3;

	for (num = 0; num <= 9; num++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{

			num3 = num * num2;

			if (num3 <= 9 && num2 > 0)
				_putchar(' ');
			else
				if (num2 > 0)
					_putchar((num3 / 10) + '0');

			_putchar((num3 % 10) + '0');

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

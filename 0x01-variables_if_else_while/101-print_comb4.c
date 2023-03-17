#include <stdio.h>

/**
 * main - prints two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num < 8; num++)
	{
		for (num2 = 1; num2 < 9; num2++)
		{
			for (num3 = 2; num3 < 10; num2++)
			{
				if (num < num2 && num2 < num3)
				{
					putchar((num) + '0');
					putchar((num2) + '0');
					putchar((num3) + '0');
					if (num != 7 && num2 != 8 && num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

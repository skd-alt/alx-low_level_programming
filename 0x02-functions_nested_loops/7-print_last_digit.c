#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @num: the number
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}

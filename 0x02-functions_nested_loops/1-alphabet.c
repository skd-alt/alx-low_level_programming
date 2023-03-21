#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		_putchar(lt);
		lt++;
	}

	_putchar('\n');
}

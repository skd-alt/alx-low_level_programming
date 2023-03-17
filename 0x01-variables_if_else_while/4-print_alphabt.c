#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return: Always 0
 */

int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		if (lt != 'e' && lt != 'q')
			putchar(lt);
	}
	putchar('\n');
	return (0);
}

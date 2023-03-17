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
		putchar(lt);
	}
	putchar('\n');
	return (0);
}

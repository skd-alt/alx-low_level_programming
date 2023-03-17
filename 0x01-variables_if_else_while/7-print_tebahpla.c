#include <stdio.h>

/**
 * main - Prints alphabet in lower case reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}

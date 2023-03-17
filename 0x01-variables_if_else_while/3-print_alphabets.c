#include <stdio.h>

/**
 * main - Prints alphabet in lower and upper
 *
 * Return: Always 0
 */

int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
		putchar(lt);

	for (lt = 'A'; lt <= 'Z'; lt++)
		putchar(lt);

	putchar('\n');
	return (0);
}

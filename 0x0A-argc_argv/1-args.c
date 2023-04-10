#include <stdio.h>

/**
 * main - Prints number of arguements
 * @argc: size of arg vector
 * @argv: arguement vector
 *
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - Prints alll arguements
 * @argc: size of arg vector
 * @argv: arguement vector
 *
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

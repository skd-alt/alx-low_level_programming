#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: size of argument vector.
 * @argv: argument vector.
 *
 * Return: 0 on Success.
 */

int main(int argc, char **argv)
{
	int i, multi;

	multi = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multi *= atoi(argv[index]);
	}
	printf("%d\n", multi);
	return (0);
}

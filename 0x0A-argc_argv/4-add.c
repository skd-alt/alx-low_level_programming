#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers.
 * @argc: size of argument vector.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *str;

			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: List of all arguments passed to function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *t, *separator;

	separator = "";

	j = 0;
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				t = va_arg(args, char *);
				if (t == NULL)
					t = "(nil)";
				printf("%s%s", separator, t);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}
	printf("\n");
	va_end(args);
}

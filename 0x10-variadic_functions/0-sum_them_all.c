#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments to be summed.
 *
 * Return: sum or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argslist;

	if (n == 0)
		return (0);

	va_start(argslist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argslist, int);
	}
	va_end(argslist);

	return (sum);
}

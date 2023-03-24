#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * Description - Return the sum of all its parameters
 * @n: the number of parameters to sum
 * Return: 0 if n == 0, otherwise the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

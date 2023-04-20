#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return:0 (if n == 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum;
	va_list list;

	va_start(list, n);
	for (k = 0, sum = 0; k < n; k++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}

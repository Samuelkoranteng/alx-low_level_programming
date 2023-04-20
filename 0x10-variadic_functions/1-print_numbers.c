#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list list;

	va_start(list, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(list, int));
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}

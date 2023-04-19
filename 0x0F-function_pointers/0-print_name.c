#include "function_pointers.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * @f: the pointers to the function
 *
 * Return: success
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

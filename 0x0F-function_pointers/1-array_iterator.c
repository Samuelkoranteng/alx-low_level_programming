#include "function_pointers.h"
#include "stdio.h"
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @size: size of array
 * @action: pointer to the function
 * @array: array of the function
 * Return: success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array && action)

	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}

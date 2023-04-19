#include "function_pointers.h"
#include "stdio.h"
/**
 * int_index -  a function that searches for an integer.
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: array of the function
 *
 * Return: -1 (if no element matches or size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]))
			return (f);
	}

	return (-1);
}

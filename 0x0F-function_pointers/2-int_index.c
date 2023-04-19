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

	if (array == NULL && size <= 0 && cmp == NULL)

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]) != 0)
			return (f);
	}
	return (-1);
}

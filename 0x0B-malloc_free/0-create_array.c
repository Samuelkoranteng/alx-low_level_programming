#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: the size of array
 * @c: firt value
 *
 * Return: (NULL) if size fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int s;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		array[s] = c;
	return (array);
}

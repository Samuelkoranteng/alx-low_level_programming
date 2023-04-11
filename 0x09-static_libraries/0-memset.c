#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: starting address of the memory to be filled
 * @b: contant byte
 * @n: number of bytes to be changed
 *
 * Return: changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

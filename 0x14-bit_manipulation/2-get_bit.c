#include "main.h"
#include "stdio.h"
/**
  * get_bit - a function that returns
  * the value of a bit at a given index.
  * @n: input long integer
  * @index:  is the index, starting from 0 of the bit
  * you want to get
  * Return: the value of the bit at index index
  * or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}

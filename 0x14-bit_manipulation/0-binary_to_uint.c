#include <stddef.h>
/**
 * binary_to_uint - converts a bit string to unsigned int
 *
 * @b: string to convert
 *
 * Return: decimal unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	if (b == NULL)
		return (0);
	for (k = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			k = k << 1;
		}
		else if (*b == '1')
		{
			k = k << 1;
			k++;
		}
		else
		{
			return (0);
		}
	}
	return (k);
}

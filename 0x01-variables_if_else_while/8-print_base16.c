#include <stdio.h>

/**
 *main - printing hexadecimal base using putchar
 *Return: 0
 */

int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (a_to_f <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}

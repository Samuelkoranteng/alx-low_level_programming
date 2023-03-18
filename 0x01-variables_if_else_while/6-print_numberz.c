#include <stdio.h>

/**
 *main - printing all single digit numbers using putchar
 *Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <=  '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

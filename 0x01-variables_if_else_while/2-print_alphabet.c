#include <stdio.h>

/**
 * main - print alphabet in lowercase a-z
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');


	return (0);
}

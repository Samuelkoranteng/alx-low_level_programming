#include <stdio.h>

/**
 *main - printing  alphabet in reversed using putchar
 *Return: 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}

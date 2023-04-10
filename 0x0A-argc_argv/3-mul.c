#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: arguments count
 * @argv: array containing the command line arguments
 *
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int k, p;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	k = atoi(argv[1]);
	p = atoi(argv[2]);
	printf("%d\n", k * p);

	return (0);
}

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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	p = atoi(argv[2]);
	result = k * p;

	printf("%d\n", result);
	return (0);
}

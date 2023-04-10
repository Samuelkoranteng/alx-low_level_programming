#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that adds positive numbers.
 * @argc: arguments count
 * @argv: array containing the command line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char **argv)
{
	int k, l, sum = 0;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l]; l++)
		{
			if (argv[k][l] < '0' || argv[k][l] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}

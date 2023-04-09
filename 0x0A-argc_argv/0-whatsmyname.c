#include "stdio.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: arguments count
 * @argv: array containing command line
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

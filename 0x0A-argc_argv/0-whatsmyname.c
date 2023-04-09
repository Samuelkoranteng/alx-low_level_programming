#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: the number of argument count
 * @argv: the array of argument
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", *argv[0]);
	return (0);
}

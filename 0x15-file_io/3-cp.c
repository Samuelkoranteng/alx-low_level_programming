#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * close_errchk - a program that copies the content of a file
 * to another file.
 * @fd: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_errchk(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

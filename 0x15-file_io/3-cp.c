#include "main.h"
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed
 * @av: list of arguments
 * Return: Success is 0
 */

int main(int argc, char *av[])
{
	int fd_from, num_read, fd_to, write_to, close_from, close_to;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((num_read = read(fd_from, buf, sizeof(buf))) > 0)
	{	write_to = write(fd_to, buf, num_read);
		if (write_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (num_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	close_from = close(fd_from);
	if (close_from == (-1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	close_to = close(fd_to);
	if (close_to == (-1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}

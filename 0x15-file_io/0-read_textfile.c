#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer that points to the file to read and write
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print or
 * 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read;
	char *buf;
	ssize_t num_bytes, write_result;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	fd_read = open(filename, O_RDONLY);
	if (fd_read == -1)
		return (0);

	num_bytes = read(fd_read, buf, letters);
	if (num_bytes == -1)
		return (0);

	write_result = write(STDOUT_FILENO, buf, num_bytes);
	if (write_result == -1)
		return (0);

	close(fd_read);
	free(buf);

	return (write_result);
}

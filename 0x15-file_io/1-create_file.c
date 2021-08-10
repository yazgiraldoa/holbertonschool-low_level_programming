#include "main.h"

/**
 * create_file - function that creates a file and
 * writes a text in it
 * @filename: name of the file to be created
 * @text_content: content to be writen in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_result, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 00600);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	write_result = write(fd, text_content, i);
	if (write_result == -1)
		return (-1);

	return (1);
}

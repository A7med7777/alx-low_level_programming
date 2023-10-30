#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and
 *	prints it to the POSEX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, ot 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		return (0);
	}

	close(fd);

	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (n_write);
}


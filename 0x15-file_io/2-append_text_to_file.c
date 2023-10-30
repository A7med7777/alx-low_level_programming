#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_write = write(fd, text_content, strlen(text_content));
		if (n_write == -1 || n_write != (ssize_t)strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

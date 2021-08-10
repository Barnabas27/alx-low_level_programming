#include "main.h"

/**
 *create_file - creates new file
 *
 *@filename: name of file to create
 *@text_content: string to be written to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t r, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;

		r = write(fd, text_content, i);

		if (r == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

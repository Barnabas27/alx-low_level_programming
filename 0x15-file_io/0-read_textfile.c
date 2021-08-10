#include "holberton.h"
#include "main.h"

/**
 *read_textfile - function that reads a text file and prints it to the POSIX
 *std output
 *@filename: file to be read
 *@letters: number of letter it should read and print
 *
 *Return: actual number of letter it could read and print, O if the file cannot
 *be read or opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, wcount;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	{
		if (!buf)

			return (0);
	}

	r = read(fd, buf, letters);

	if (r == -1)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';

	close(fd);

	wcount = write(STDOUT_FILENO, buf, r);
	if (wcount == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (wcount);
}

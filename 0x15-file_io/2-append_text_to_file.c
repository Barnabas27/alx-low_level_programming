#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *
 *@text_content: the string to be
 *@filename: file that text is to be appended to
 *
 *Return: 1 if file exists and -1 if file does not.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		/**
		 *give the iteration here is the number of words
		 */
		status = write(fd, text_content, i);

		if (status == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

#include "main.h"
#include <string.h>
#include <errno.h>

/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file
 * @text_content: NULL terminated string that to be written to the file
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w_count = write(fd, text_content, strlen(text_content));
		close(fd);

		if (w_count == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

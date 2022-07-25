#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and writes the given content
 * @filename: the name of the file
 * @text_content: NULL terminated string that to be written to the file
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
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

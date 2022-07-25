#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_count, w_count;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, letters);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	r_count = read(fd, buff, letters);
	close(fd);

	w_count = write(STDOUT_FILENO, buff, r_count);
	free(buff);

	if (r_count != w_count)
		return (0);

	return (w_count);
}

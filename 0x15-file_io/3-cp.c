#include "main.h"
#include <stdio.h>


/**
 * close_file - closes the given file
 * @file_d: the file descriptor
 *
 * Return: Nothing
 */
void close_file(int file_d)
{
	if (close(file_d) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - check the code
 * @argc: the number of arguments passed to the program
 * @argv: the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	ssize_t r_count, w_count;
	int fd_to, fd_from, mode, buff_len = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	mode = S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP;
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		r_count = read(fd_from, buff, buff_len);
		if (r_count != 0)
		{
			w_count = write(fd_to, buff, r_count);
			if (w_count != r_count)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (r_count > 0);

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

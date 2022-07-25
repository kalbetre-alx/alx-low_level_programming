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
 * check_read - checks read operation
 * @file_name: the file descriptor
 * @result: the return of a call to write
 *
 * Return: Nothing
 */
void check_read(char *file_name, int result)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
}

/**
 * check_write - checks write operation
 * @file_name: the file descriptor
 * @result: the return of a call to write
 *
 * Return: Nothing
 */
void check_write(char *file_name, int result)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
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
	int fd_to, fd_from, buff_len = 1024;
	mode_t f_mode;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_read(argv[1], fd_from);
	f_mode = S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, f_mode);
	check_write(argv[2], fd_to);

	do {
		r_count = read(fd_from, buff, buff_len);
		check_read(argv[1], r_count);
		if (r_count != 0)
		{
			w_count = write(fd_to, buff, r_count);
			check_write(argv[2], w_count != r_count ? -1 : 1);
		}
	} while (r_count > 0);

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

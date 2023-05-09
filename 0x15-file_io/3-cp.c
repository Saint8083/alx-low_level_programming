#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

void print_usage_and_exit()
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

void print_error_and_exit(const char *file, const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
	exit(exit_code);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_usage_and_exit();
	}

	char *file_from = argv[1];
	char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(file_from, "Can't read from file", 98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error_and_exit(file_to, "Can't write to file", 99);
	}

	char buffer[BUFFER_SIZE];
	ssize_t read_bytes;
	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, read_bytes) != read_bytes)
		{
			print_error_and_exit(file_to, "Can't write to file", 99);
		}
	}

	if (read_bytes == -1)
	{
		print_error_and_exit(file_from, "Can't read from file", 98);
	}

	if (close(fd_from) == -1)
	{
		print_error_and_exit(file_from, "Can't close fd", 100);
	}

	if (close(fd_to) == -1)
	{
		print_error_and_exit(file_to, "Can't close fd", 100);
	}

	return (0);
}

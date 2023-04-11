#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 *close_file_des - function that closes the file
 *@fd: file to be closed
 */

void close_file_des(int fd)
{
	int close_result;

	close_result = close(fd);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - copies content from and to a file
 *@argv: pointer array to the arguments
 *@argc: arguments count
 *Return: 0
 */

int main(int argc, char **argv)
{
	ssize_t read_file = 1024, write_file;
	int cp_from, cp_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (read_file == 1024)
	{
		read_file = read(cp_from, buffer, 1024);
		write_file = write(cp_to, buffer, read_file);
		if (read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file_des(cp_from);
	close_file_des(cp_to);

	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *allot_mem(char *f);
void close_file_des(int fd);


/**
 *allot_mem - function that allocates 1024 bytes of memory
 *@f: pointer to the file allot_mem
 *Return: pointer to allocated memory location
 */

char *allot_mem(char *f)
{
	char *buffer;

	buffer = (char *) malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}

/**
 *close_file_des - functions that closes the file
 *@fd: file to be closed
 */

void close_file_des(int fd)
{
	int cl;

	cl = cl(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 *main - copies content from a file to a file
 *@argv: pointer array to the arguments
 *@argc: arguments count
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int read, write;
	int cp_from;
	int cp_to;
	char *alloc_memory;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	alloc_memory = allot_mem(argv[2]);
	cp_from = open(argv[1], O_RDONLY);
	read = read(from, buffer, 1024);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {

		if (cp_from == -1 || read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(alloc_memory);
			exit(98);
		}

		read = read(cp_from, alloc_memory,  1024);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);

		write = write(cp_to, alloc_memory, read);
		if (cp_to == -1 || write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(alloc_memory);
			exit(99);
		}
	} while (read > 0);

	free(alloc_memory);
	close_file_des(cp_from);
	close_file_des(cp_to);

	return (0);
}

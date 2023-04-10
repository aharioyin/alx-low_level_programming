#include "main.h"
#include <stdlib.h>

/**
 *read_textfile -  function that reads a text file
 *		 and prints it to the POSIX standard output.
 *@filename: pointer to the name of the file
 *@letters: num of letters it should read and print
 *Return: If filename is NULL, and file cannot be opened, return 0
 *	 No of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t re;
	ssize_t writ;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	re = read(op, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, re);

	if (filename == NULL)
		return (0);

	free(buffer);
	close(op);
	return (writ);
}

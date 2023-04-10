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
	ssize_t op, re, writ;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	writ = writ(STDOUT_FILENO, buffer, re);

	if (filename == NULL)
		return (0);

	if (op == -1 || re == -1 || writ == -1 || writ != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (writ);
}

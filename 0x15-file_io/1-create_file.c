#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: pointer to the name of the file
 *@text_content: pointer to the NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 *	if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, writ;
	int len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(op, text_content, len);

	if (op == -1 || writ == -1)
		return (-1);

	close(op);

	return (1);
}

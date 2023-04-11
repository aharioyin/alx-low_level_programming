#include "main.h"

/**
 *_strlen - length of the string
 *@str: pointer to the string
 *Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;

	return (j);
}

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: pointer to the name of the file
 *@text_content: pointer to the NULL terminated string
 *		to add at the end of the file
 *Return: 1 on success and -1 on failure
 *	filename is NULL return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ap;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	ap = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		len = write(ap, text_content, _strlen(text_content));
	if (ap == -1)
		return (-1);
	close(ap);
	if (len == -1)
		return (-1);
	return (1);
}

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

#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - function for creating a file
 * @filename: name of file
 * @text_content: content for appending
 * Return: returns 1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int o_rw = 0, length;
	char *ptr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREATE | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; ptr = text_content; *ptr; ptr++)
			length++;
		o_rw = write(file, text_content, length);
	}
	if (close(file) == -1 || length != o_rw)
		return (-1);
	return (1);
}

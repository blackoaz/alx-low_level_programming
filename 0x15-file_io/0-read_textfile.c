#include "main.h"
/**
 * read_textfile - function for reading text file and printing
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return: returns leters to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_bytes = write(STDOUT_FILE, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (read_bytes);

}

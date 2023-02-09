#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function for reading text file and printing
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return: returns leters to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int o_rd, o_rw;
	size_t read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	o_rd = read(filename, buffer, letters);

	if (o_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	o_rw = write(STDOUT_FILENO, buffer, o_rd);

	if (o_rw != o_rd)
		return (0);

	free(buffer);
	close(fd);
	return (o_rd);


}

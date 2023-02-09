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
	int o_rd, o_rw;
	size_t read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char)*letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	o_rd = read(filename, buffer, letters);

	if (o_rd == -1)
		return (0);

	o_rw = write(filename, buffer, o_rd);

	if (o_rw == -1)
		return (0);
	free(buffer);
	close(fd);
	return(o_rd);


}

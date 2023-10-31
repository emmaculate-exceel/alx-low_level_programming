#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: file to read from
 * @letters: num of letter to read
 *
 * Return: actual num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	readr = read(fd, buffer, letters);
	close(fd);
	if (readr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, readr);
	free(buffer);
	if (readr != lenw)
		return (0);
	return (lenw);
}

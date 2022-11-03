#include "main.h"

/**
 * read_textfile - function to read from a file and print to stdout
 * @filename: file to read from
 * @letters: number of letters to read and print
 * Return: number of letters it could print on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_write;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_read = read(fd, buf, letters);
	if (n_read < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (n_read);
}

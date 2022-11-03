#include "main.h"

/**
 * create_file - fuction to create a file
 * @filename: name of file to craete
 * @text_content: null terminated string to write to the file
 * Return: 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, fd, n_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != 0)
		len++;
	n_write = write(fd, text_content, len);
	if (n_write < 0 || n_write != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

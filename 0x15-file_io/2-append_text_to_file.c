#include "main.h"

/**
 * append_text_to_file - function to append text to file
 * @filename: name of file to append to
 * @text_content: content to append to file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, n_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	len = 0;
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != 0)
		len++;
	n_write = write(fd, text_content, len);
	if (n_write < 0 || n_write != len)
		return (-1);
	close(fd);
	return (1);
}

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_letters;
	size_t letters;

	letters = 0;
	while (text_content[letters])
		letters++;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		w_letters = write(fd, text_content, letters);
		if (w_letters < 0)
			return (-1);
	}

	close(fd);
	return (1);
}

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - append text to an existing file
 * @filename: name of file
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t letters = 0;
	ssize_t w_letters;

	if (filename == NULL)
		return (-1);

	while (text_content[letters])
		letters++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (letters != 0)
	{
		w_letters = write(fd, text_content, letters);
		if (w_letters < 0)
			return (-1);
	}

	close(fd);
	return (1);
}

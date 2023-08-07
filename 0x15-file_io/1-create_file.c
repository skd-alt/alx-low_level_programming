#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 success or -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, w_letters, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_letters = write(file, text_content, len);

	if (file == -1 || w_letters == -1)
		return (-1);

	close(file);

	return (1);
}

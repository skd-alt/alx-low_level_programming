#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on Success or -1 on Failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, w_letters, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w_letters = write(file, text_content, len);

	if (file == -1 || w_letters == -1)
		return (-1);

	close(file);
	return (-1);
}

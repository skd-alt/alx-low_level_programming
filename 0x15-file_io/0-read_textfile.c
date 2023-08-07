#include "main.h"

/**
 * read_textfile- Read text a file and output.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: bytes printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t w_letters;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	w_letters = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file);
	return (w_letters);
}

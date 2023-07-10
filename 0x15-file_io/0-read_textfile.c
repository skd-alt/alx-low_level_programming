#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: text file being read
 * @letters: numebr of letters
 *
 * Return: number of bytes or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, w;
	size_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

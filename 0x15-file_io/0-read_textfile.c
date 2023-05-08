#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: text file being read
 * @letters: is the number of letters it should read and print
 *
 * Return: 0 or  actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *read_buf;
	ssize_t r_letters, w_letters;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	read_buf = malloc(sizeof(char) * letters);
	r_letters = read(fd, read_buf, letters);
	if (r_letters < 0)
		return (0);
	w_letters = write(STDOUT_FILENO, read_buf, r_letters);
	if (w_letters < 0)
		return (0);
	free(read_buf);
	close(fd);
	return (w_letters);
}

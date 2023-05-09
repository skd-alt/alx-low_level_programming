#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - function copies text from one file to another
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd, fd_w, i, fc, fc_w;
	ssize_t r_letters, w_letters;
	char *read_buffer;
	char *cont = "yes";

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		return (98);
	}

	i = 0;

	while (cont)
	{
		read_buffer = malloc(sizeof(char) * 1024);

		r_letters = pread(fd, read_buffer, 1024, i * 1024);
		if (r_letters < 0 && i == 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			return (98);
		}

		if (i == 0)
		{
			fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
			if (fd_w < 0)
			{
				dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
				return (99);
			}
		}

		fd_w = open(argv[2], O_WRONLY | O_APPEND, 0664);
		if (fd_w < 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			return (99);
		}

		w_letters = write(fd_w, read_buffer, r_letters);
		if (w_letters < 0 && i == 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			return (99);
		}

		if (r_letters < 1024)
			cont = NULL;

		free(read_buffer);
		fc = close(fd);
		fc_w = close(fd_w);
		if (fc < 0 || fc_w < 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n");
			return (100);
		}
		i++;
	}
	return (0);
}

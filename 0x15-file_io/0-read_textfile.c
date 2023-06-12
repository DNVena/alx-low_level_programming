#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads test file and prints to screen
 * @filename: takes a pointer to file
 * @letters: number of letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fd;
	ssize_t o, r, w;

	if (filename == NULL)
	{
		return (0);
	}
	fd = malloc(sizeof(char) * letters);
	if (fd == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, fd, letters);
	w = write(STDOUT_FILENO, fd, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(fd);
		return (0);
	}
	free(fd);
	close(o);
	return (w);
}

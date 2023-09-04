#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
/**
 * read_textfile - read_textfile
 * @filename: pointer of a file
 * @letters: number of letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, c_wr;
	char *ash = malloc(letters);
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (!ash)
	{
		close(fd);
		return (0);
	}
	count = read(fd, ash, letters);
	if (count == -1)
	{
		free(ash);
		close(fd);
		return (0);
	}
	c_wr = write(STDOUT_FILENO, ash, count);
	if (c_wr == -1 || count != c_wr)
	{
		free(ash);
		close(fd);
		return (0);
	}
	free(ash);
	close(fd);
	return (c_wr);
}

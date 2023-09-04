#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
/**
 * create_file - file
 * @filename: name of file
 * @text_content: content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		if (write(fd, text_content, count) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

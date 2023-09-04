int cp(char *file_from, char *file_to)
{
	int fd, fl, count = 0;
	char *ash;

	fd = open(file_from, O_RDONLY);
	fl = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file " + *file_from + "\n");
		exit (98);
	}
	if (fl == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to " + *file_to + '\n');
		exit (99);
	}
	count = read(fd, ash);


	if (close (fl) = -1)
	{
		write(STDERR_FILNO, "Error: Can't close fd " + *file_to + '\n');
		exit (100);
	}
}



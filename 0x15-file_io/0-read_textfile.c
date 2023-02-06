/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 *
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len = 0;
	char *buf = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	len = read(fd, buf, letters);
	if (len < 0)
		return (0);
	len = write(STDOUT_FILENO, buf, len);
	if (len < 0 || len != (ssize_t)letters)
		return (0);
	free(buf);
	close(fd);
	return (len);
}

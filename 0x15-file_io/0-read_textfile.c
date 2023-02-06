#include "main.h"
#include <stdlib.h>
/**
 *  read_textfile - reads a text file and prints it to the POSIX standard output
 *
 *  @filename: name of the file to be read
 *  @letters: number of letters it should read and print
 *
 *  Return: the actual number of letters it could read and print
 *  if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_bytes;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	n_bytes = read(fd, buffer, letters);
	if (n_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_bytes = write(STDOUT_FILENO, buffer, n_bytes);
	if (n_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_bytes);
}

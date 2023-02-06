#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
* main - check the code
*
* Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nr;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
nr = read(fd, buf, letters);
if (nr == -1)
return (0);
if ((write(STDOUT_FILENO, buf, nr)) == -1)
return (0);
close(fd);
free(buf);
return (nr);
}

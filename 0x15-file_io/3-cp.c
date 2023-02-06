#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUF_SIZE 1024
/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 97 - 100 on error
*/
int main(int argc, char **argv)
{
int fd_from, fd_to, n_read, n_write;
char buf[BUF_SIZE];
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
n_write = write(fd_to, buf, n_read);
if (n_write != n_read)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}

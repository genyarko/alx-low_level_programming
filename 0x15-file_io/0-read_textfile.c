#include "main.h"
/*
 * create_file - Creates a file with the given name and content.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Description: Creates a file with the given name and content.
 * The created file must have the permissions rw-------. If the file
 * already exists, it is truncated.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc...)
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int ret;
    mode_t mode = S_IRUSR | S_IWUSR;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        ret = write(fd, text_content, strlen(text_content));
        if (ret == -1)
            return (-1);
    }

    close(fd);
    return (1);
}

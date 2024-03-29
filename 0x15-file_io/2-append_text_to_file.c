/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: the NULL terminated string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int ret;
int len;
ssize_t wret;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
len = strlen(text_content);
wret = write(fd, text_content, len);
if (wret == -1)
ret = -1;
else
ret = 1;
close(fd);
return (ret);
}

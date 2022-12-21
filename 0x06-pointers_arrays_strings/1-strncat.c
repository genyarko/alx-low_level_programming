/**
* _strncat - concatenates two strings
* @dest: string to be concatenated
* @src: string to be concatenated
* @n: number of bytes to be concatenated
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}

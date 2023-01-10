#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string to copy
* Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
char *p;
int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
p = malloc(sizeof(char) * i + 1);
if (p == NULL)
return (NULL);
for (j = 0; j <= i; j++)
p[j] = str[j];
return (p);
}

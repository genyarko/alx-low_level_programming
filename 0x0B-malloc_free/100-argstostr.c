#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: number of arguments
* @av: array of arguments
* Return: pointer to a new string
*/

char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}
len++;
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
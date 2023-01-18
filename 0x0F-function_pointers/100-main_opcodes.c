#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function.
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
int i, j;
char *p;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
j = atoi(argv[1]);
if (j < 0)
{
printf("Error\n");
exit(2);
}
p = (char *)main;
for (i = 0; i < j; i++)
{
printf("%02hhx", p[i]);
if (i < j - 1)
printf(" ");
}
printf("\n");
return (0);
}

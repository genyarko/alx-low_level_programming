#include <stdio.h>
#include <unistd.h>
/**
* main - prints its name
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}

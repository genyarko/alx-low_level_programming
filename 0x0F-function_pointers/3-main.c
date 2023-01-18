#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argv[2][0] == '+')
result = num1 + num2;
else if (argv[2][0] == '-')
result = num1 - num2;
else if (argv[2][0] == '*')
result = num1 *num2;
else if (argv[2][0] == '/')
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
result = num1 / num2;
}
else if (argv[2][0] == '%')
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
result = num1 % num2;
}
else
{
printf("Error\n");
exit(99);
}
printf("%d\n", result);
return (0);
}

#include <stdio.h>
/**
* print_sign - prints the sign of a number
* @n: number to be checked
* Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than 0
*/

int print_sign(int n)
{
while (n > 0)
{
putchar('+');
return (1);
}
while (n == 0)
{
putchar('0');
return (0);
}
 while (n < 0)
{
putchar('-');
return (-1);
}
}

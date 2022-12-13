#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
* @n: number to be evaluated
* Return: last digit of a number
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
putchar(last_digit + '0');
return (last_digit);
}

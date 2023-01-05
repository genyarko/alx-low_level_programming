#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* factorial - returns the factorial of a given number.
* @n: number to calculate factorial.
* Return: factorial of n.
*/
int factorial(int n)
{
int i;
long int fact = 1;
if (n < 0)
return (-1);
if (n == 0)
return (1);
for (i = 1; i <= n; i++)
{
fact = fact * i;
if (fact > LONG_MAX)
return (-1);
}
return (fact);
}

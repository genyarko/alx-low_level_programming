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
if (n == 0)
return (1);
else if (n <= 1)
return (1);
else
return (n * factorial(n - 1));
}

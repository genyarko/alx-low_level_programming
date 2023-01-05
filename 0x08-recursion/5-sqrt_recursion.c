#include <stdio.h>
/**
* sqrt_helper - helper function for _sqrt_recursion
* @n: number to find square root of
* @i: number to check if it is the square root
* Return: square root of n, or -1 if none
**/

int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}
/**
* _sqrt_recursion - return the natural square root of a number n.
* @n: number to check for square roots.
* Return: the natural square root of number n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
return (sqrt_helper(n, 1));
}

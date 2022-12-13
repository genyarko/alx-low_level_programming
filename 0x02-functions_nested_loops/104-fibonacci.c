#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int fib = 3; /* Loop begins from 3, must start with 1 and 2*/
int first = 1, second = 2;
int next = first + second;
printf("%d, ", first);
printf("%d, ", second);
while (fib <= 98)
{
/* Range */
if (fib == 98)
{
printf("%d \n", next);
}
else
{
printf("%d, ", next);
}
/* Reset the variables to get the next number */
first = second;
second = next;
/* after resetting the variables, you need to find the next number */
next = first + second;
fib++;
}
return (0);
}

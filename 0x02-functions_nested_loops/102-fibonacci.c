#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int fib = 3; /* Loop begins from 3, must start with 1 and 2*/
long int first = 1, second = 2;
long int next = first + second;
printf("%lu, ", first);
printf("%lu, ", second);
while (fib <= 50)
{
/* Range */
if (fib == 50)
{
printf("%lu \n", next);
}
else
{
printf("%lu, ", next);
}
first = second;
second = next;
next = first + second;
fib++;
}
return (0);
}

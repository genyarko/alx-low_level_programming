#include <stdio.h>
#include <stdlib.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: 0
*/

int main(void)
{
long int num = 612852475143;
long int i;
for (i = 2; i < num; i++)
{
if (num % i == 0)
{
num = num / i;
i--;
}
}
printf("%ld\n", num);
return (0);
}

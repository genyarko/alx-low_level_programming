#include <stdio.h>
/**
* print_times_table - a function that prints all natural numbers from n to 98
* user input's number prints to 98, regardless < 98 or > 98
* @n: number input
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int i;
int result;
if (n > 15 || n < 0)
return;
for (i = 0; i <= 15; i++)
{
result = i * n;
printf("%d x %d = %d\n", i, n, result);
}
}

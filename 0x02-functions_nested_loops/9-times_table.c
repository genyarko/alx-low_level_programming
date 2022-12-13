#include <stdio.h>
/**
* times_table -  a function that prints the 9 times table, starting with 0
* rone = row, cone = column, d = digits of current result
* Return: times table
* add extra space past single digit
* main - check the code
*
*/
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
if (k > 9)
{
putchar(k / 10 + '0');
putchar(k % 10 + '0');
}
else
{
if (j != 0)
{
putchar(' ');
}
putchar(k + '0');
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}

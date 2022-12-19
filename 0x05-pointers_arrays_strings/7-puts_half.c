#include <stdio.h>
/**
* puts_half - prints the second half of a string followed by a new line
* @str: string to print
*
* Return: nothing
*/

void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++);
if (i % 2 == 0)
j = i / 2;
else
j = (i - 1) / 2;
for (; j < i; j++)
putchar(str[j]);
putchar('\n');
}

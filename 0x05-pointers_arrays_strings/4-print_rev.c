/**
* print_rev - prints a string in reverse followed by a new line
* @s: string to be printed in reverse
*/

void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}

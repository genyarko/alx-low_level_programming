/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
* Return: void
*/

void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
putchar('\n');
}
}

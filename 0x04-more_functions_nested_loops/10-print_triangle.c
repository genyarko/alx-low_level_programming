/**
* print_triangle - prints a triangle
* @size: size of triangle
* Return: void
*/

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
k = size - i - 1;
if (j < k)
{
putchar(' ');
}
else
{
putchar('#');
}
}
putchar('\n');
}
}
}

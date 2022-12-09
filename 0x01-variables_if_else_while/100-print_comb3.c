#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void ft_putchar(char c)
{
write(1, &c, 1);
}
void ft_print_comb2(void)
{
inti;
intj;
i = 0;
while (i <= 98)
{
j = i + 1;
while (j <= 99)
{
ft_putchar(i / 10 + '0');
ft_putchar(i % 10 + '0');
ft_putchar(' ');
ft_putchar(j / 10 + '0');
ft_putchar(j % 10 + '0');
if (i != 98)
{
ft_putchar(',');
ft_putchar(' ');
}
j++;
}
i++;
}
}
int main(void)
{
ft_print_comb2();
return (0);
}

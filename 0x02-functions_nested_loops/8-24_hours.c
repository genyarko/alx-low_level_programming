#include <stdio.h>
#include <unistd.h>
/**
* jack_bauer - function that prints every minute of the day, 24 hour clock
* ft_putchar - in
* / 10 allows second digit to rotate
* ft_putnbr function
* Return: 24 hour clock line by line
*/
void ft_putchar(char c)
{
write(1, &c, 1);
}
void ft_putnbr(int nb)
{
if (nb < 0)
{
ft_putchar('-');
nb = -nb;
}
if (nb >= 10)
{
ft_putnbr(nb / 10);
ft_putnbr(nb % 10);
}
else
ft_putchar(nb + '0');
}
void jack_bauer(void)
{
int i;
int j;
i = 0;
while (i < 24)
{
j = 0;
while (j < 60)
{
ft_putnbr(i);
ft_putchar(':');
ft_putnbr(j);
ft_putchar('\n');
j++;
}
i++;
}
}

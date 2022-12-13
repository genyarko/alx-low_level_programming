#include <stdio.h>
voidft_putchar(char c)
{
write(1, &c, 1);
}
voidft_putnbr(int nb)
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
voidjack_bauer(void)
{
inti;
intj;
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

#include "main.h"
#include <stdio.h>
/**
* print_number - prints an integer.
* @n: integer to print.
* Return: void.
*/
void print_number(int n)
{
int i, j, k, l, m, o, p, q, r, s, t, u, v, w, x, y, z;
if (n < 0)
{
putchar('-');
n = n * -1;
}
i = n / 1000000000;
j = (n / 100000000) % 10;
k = (n / 10000000) % 10;
l = (n / 1000000) % 10;
m = (n / 100000) % 10;
o = (n / 10000) % 10;
p = (n / 1000) % 10;
q = (n / 100) % 10;
r = (n / 10) % 10;
s = n % 10;
t = n % 100;
u = n % 1000;
v = n % 10000;
w = n % 100000;
x = n % 1000000;
y = n % 10000000;
z = n % 100000000;
if (i != 0)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');
putchar(m + '0');
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (j != 0)
{
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');
putchar(m + '0');
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (k != 0)
{
putchar(k + '0');
putchar(l + '0');
putchar(m + '0');
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (l != 0)
{
putchar(l + '0');
putchar(m + '0');
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (m != 0)
{
putchar(m + '0');
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (o != 0)
{
putchar(o + '0');
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (p != 0)
{
putchar(p + '0');
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (q != 0)
{
putchar(q + '0');
putchar(r + '0');
putchar(s + '0');
}
else if (r != 0)
{
putchar(r + '0');
putchar(s + '0');
}
else if (s != 0)
{
putchar(s + '0');
}
else if (t != 0)
{
putchar(t + '0');
}
else if (u != 0)
{
putchar(u + '0');
}
else if (v != 0)
{
putchar(v + '0');
}
else if (w != 0)
{
putchar(w + '0');
}
else if (x != 0)
{
putchar(x + '0');
}
else if (y != 0)
{
putchar(y + '0');
}
else if (z != 0)
{
putchar(z + '0');
}
else
{
putchar('0');
}
}

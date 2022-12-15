#include <stdio.h>
/**
* print_number - prints an integer
* @n: integer to print
* Return: void
*/

void print_number(int n)
{
int i, j, k, l, m, o, p, q, r, s, t, u, v, w, x, y, z;
if (n < 0)
{
_putchar('-');
n = -n;
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
_putchar(i + '0');
_putchar(j + '0');
_putchar(k + '0');
_putchar(l + '0');
_putchar(m + '0');
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (j != 0)
{
_putchar(j + '0');
_putchar(k + '0');
_putchar(l + '0');
_putchar(m + '0');
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (k != 0)
{
_putchar(k + '0');
_putchar(l + '0');
_putchar(m + '0');
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (l != 0)  
{
_putchar(l + '0');
_putchar(m + '0');
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (m != 0)
{
_putchar(m + '0');
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (o != 0)
{
_putchar(o + '0');
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (p != 0)
{
_putchar(p + '0');
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (q != 0)
{
_putchar(q + '0');
_putchar(r + '0');
_putchar(s + '0');
}
else if (r != 0)
{
_putchar(r + '0');
_putchar(s + '0');
}
else if (s != 0)
{
_putchar(s + '0');
}
else if (t != 0)
{
_putchar(t + '0');
}
else if (u != 0)
{
_putchar(u + '0');
}
else if (v != 0)
{
_putchar(v + '0');
}
else if (w != 0)
{
_putchar(w + '0');
}
else if (x != 0)
{
_putchar(x + '0');
}
else if (y != 0)
{
_putchar(y + '0');
}
else if (z != 0)
{
_putchar(z + '0');
}
else
{
_putchar('0');
}
}

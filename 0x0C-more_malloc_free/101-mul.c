#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if success, 98 if error
*/
int main(int argc, char *argv[])
{
int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
exit(98);
}
}
}
k = atoi(argv[1]);
l = atoi(argv[2]);
m = k *l;
n = m;
o = 0;
while (n > 0)
{
n = n / 10;
o++;
}
p = o;
q = 1;
while (p > 1)
{
q = q * 10;
p--;
}
r = m;
while (q > 0)
{
s = r / q;
t = s + '0';
putchar(t);
r = r % q;
q = q / 10;
}
putchar('\n');
return (0);
}

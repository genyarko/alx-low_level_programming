#include <stdio.h>
#include <stdlib.h>
/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer
* @size_r: buffer size
* Return: r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n, o, p, q, sum, carry;
i = 0;
while (n1[i] != '\0')
i++;
j = 0;
while (n2[j] != '\0')
j++;
if (i + 2 > size_r || j + 2 > size_r)
return (0);
k = i - 1;
l = j - 1;
m = 0;
carry = 0;
while (k >= 0 || l >= 0)
{
n = k >= 0 ? n1[k] - '0' : 0;
o = l >= 0 ? n2[l] - '0' : 0;
p = n + o + carry;
q = p % 10;
carry = p / 10;
r[m] = q + '0';
m++;
k--;
l--;
}
if (carry > 0)
{
r[m] = carry + '0';
m++;
}
r[m] = '\0';
sum = 0;
for (i = 0; r[i] != '\0'; i++)
sum++;
for (i = 0; i < sum / 2; i++)
{
j = r[i];
r[i] = r[sum - i - 1];
r[sum - i - 1] = j;
}
return (r);
}

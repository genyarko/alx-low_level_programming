#include <stdio.h>
/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @n: number to convert from
* @m: number to convert to
*
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int counter = 0;
while (n > 0 || m > 0) 
{
if ((n & 1) != (m & 1))
counter++;
n >>= 1;
m >>= 1;
}
return counter;
}

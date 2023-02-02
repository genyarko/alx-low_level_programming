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
unsigned long int xor, bits;
unsigned int i, num_flips;
bits = sizeof(n) * 8;
xor = n ^ m;
num_flips = 0;
for (i = 0; i < bits; i++)
{
if (get_bit(xor, i) == 1)
num_flips++;
}
return (num_flips);
}

/**
* print_binary - prints the binary representation of a number
* @n: number to convert
*
* Description: This function uses bitwise shifts to print the binary 
* representation of a number. It does not use arrays, malloc, %, or /.
*/
void print_binary(unsigned long int n)
{
unsigned long int binary;
int i;
if (n == 0)
printf("0");
for (i = ((sizeof(n) * 8) - 1); i >= 0; i--)
{
binary = n >> i;
if (binary & 1)
printf("1");
else
printf("0");
}
printf("\n");
}

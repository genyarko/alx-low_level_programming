/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
*
* Return: Converted number, or 0 if:
* - There is one or more chars in the string b that is not 0 or 1.
* - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b == '1')
num = (num << 1) | 1;
else if (*b == '0')
num <<= 1;
else
return (0);
b++;
}
return (num);
}

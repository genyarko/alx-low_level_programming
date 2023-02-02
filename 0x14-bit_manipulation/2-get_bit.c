/**
* get_bit - returns the value of a bit at a given index
* @n: number to search
* @index: index of bit to get
*
* Return: value of bit at index or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8))
return (-1);
return ((n >> index) & 1);
}

/**
* print_array - prints n elements of an array of integers
* @a: array to be printed
* @n: number of elements of the array to be printed
*
* Description: Prints n elements of an array of integers.
* Numbers must be separated by comma, followed by a space.
* The numbers should be displayed in the same order as stored in the array.
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
printf(", ");
}
printf("\n");
}

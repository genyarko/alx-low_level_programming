#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int ar[11] = {2, 8, 34, 144, 610, 2584, 10946, 46368, 196418, 832040, 3524578};
int sum = 0;
int i;
for (i = 0; i < 11; i++)
{
sum += ar[i];
}
printf("%d\n", sum);
return (0);
}

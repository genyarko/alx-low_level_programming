#include "main.h"
#include <stdio.h>
/**
* main - prints the largest of 3 integers
* Return: 0
*/
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && b > c)
{      
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else if (c > a)
{
largest = c;
}
else
{
largest = b;
}
return (largest);
}

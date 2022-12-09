#include <unistd.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - Entry point
*
*Return: Always 0 (success)
*/

#include <unistd.h>



int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

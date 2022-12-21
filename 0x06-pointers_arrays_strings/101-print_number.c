#include <stdio.h>
/**

 * print_number - prints an integer

 * @n: integer to print

 *

 * Return: void

 */

void print_number(int n)
  
{
  
  int i, j, k, l, m, p;
  

  
  if (n < 0)
    
    {
      
      _putchar('-');
      
      n = -n;
      
    }
  
  i = n / 1000000000;
  
  j = (n / 100000000) % 10;
  
  k = (n / 10000000) % 10;
  
  l = (n / 1000000) % 10;
  
  m = (n / 100000) % 10;
  
  p = (n / 10000) % 10;
  
  if (i != 0)
    
    {
      
      _putchar(i + '0');
      
      _putchar(j + '0');
      
      _putchar(k + '0');
      
      _putchar(l + '0');
      
      _putchar(m + '0');
      
      _putchar(p + '0');
      
    }
  
  else if (j != 0)
    
    {
      
      _putchar(j + '0');
      
      _putchar(k + '0');
      
      _putchar(l + '0');
      
      _putchar(m + '0');
      
      _putchar(p + '0');
      
    }
  
  else if (k != 0)
    
    {
      
      _putchar(k + '0');
      
      _putchar(l + '0');
      
      _putchar(m + '0');
      
      _putchar(p + '0');
      
    }
  
  else if (l != 0)
    
    {
      
      _putchar(l + '0');
      
      _putchar(m + '0');
      
      _putchar(p + '0');
      
    }
  
  else if (m != 0)
    
    {
      
      _putchar(m + '0');
      
      _putchar(p + '0');
      
    }
  
  else if (p != 0)
    
    {
      
      _putchar(p + '0');
      
    }
  
  _putchar((n / 1000) % 10 + '0');
  
  _putchar((n / 100) % 10 + '0');
  
  _putchar((n / 10) % 10 + '0');
  
  _putchar(n % 10 + '0');
  
}

int _sqrt_recursion(int n)
  
{
  
  if (n < 0)
    
    return (-1);
  
  if (n == 0)
    
    return (0);
  
  return (sqrt_helper(n, 1));
  
}



/**

 * sqrt_helper - helper function for _sqrt_recursion

 * @n: number to find square root of

 * @i: number to check if it is the square root

 * Return: square root of n, or -1 if none

 */

int sqrt_helper(int n, int i)
  
{
  
  if (i * i == n)
    
    return (i);
  
  if (i * i > n)
    
    return (-1);
  
  return (sqrt_helper(n, i + 1));
  
}

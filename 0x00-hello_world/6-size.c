#include <stdio.h>
int main(void)
  
{
  
  int a;
  
  float b;
  
  double c;
  
  char d;
  
  long int e;
  
  long long int f;
  
  printf("Size of a char: %d byte(s)\n", sizeof(d));
  
  printf("Size of an int: %d byte(s)\n", sizeof(a));
  
  printf("Size of a long int: %d byte(s)\n", sizeof(e));
  
  printf("Size of a long long int: %d byte(s)\n", sizeof(f));
  
  printf("Size of a float: %d byte(s)\n", sizeof(b));
  
  return (0);
  
}

#include <unistd.h>



intmain(int argc, char **argv)
  
{
  
  (void)argv;
  
  write(1, &argc, 1);
  
  write(1, "\n", 1);
  
  return (0);
  
}

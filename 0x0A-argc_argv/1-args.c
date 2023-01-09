#include <unistd.h>               
/**
* main - prints the number of arguments passed into it.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
(void)argv;
write(1, &argc, 1);
write(1, "\n", 1);
return (0);     
}

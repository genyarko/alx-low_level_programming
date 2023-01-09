#include <unistd.h>
/**                                                                            * main - print the name of the program                                        
* @argc: Count arguments                                                       * @argv: Arguments                                                             * Return: Always 0 (Success)                                                   
*/

int main(int argc, char **argv)
{
(void)argv;
write(1, &argc, 1);
write(1, "\n", 1);
return (0);
}

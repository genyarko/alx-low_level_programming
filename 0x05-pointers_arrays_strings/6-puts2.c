#include <stdio.h>
/**
* puts2 - print every other character of a string
* @str: the string to be printed
*
* Description: This function takes a string as argument, and
* prints out every other character, starting with the first
* character, followed by a new line.
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
putchar(str[i]);
putchar('\n');
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0;
char *str;
va_start(valist, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int));
break;
case 'i':
printf("%d", va_arg(valist, int));
break;
case 'f':
printf("%f", va_arg(valist, double));
break;
case 's':
str = va_arg(valist, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(valist);
}

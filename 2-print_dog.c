#include <stdio.h>
#include "dog.h"
/**
* print_dog - takes a pointer to a struct dog as a parameter
* and prints out the contents of the struct
*
* @d: pointer to the struct dog
*
* Return: void
*/
void print_dog(struct dog *d)
{
if (!d)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

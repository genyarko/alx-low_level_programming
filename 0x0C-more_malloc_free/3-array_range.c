#include <stdlib.h>
/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
*
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
*
* Return: pointer to the allocated memory.
*/
int *array_range(int min, int max)
{
int *ptr;
int i;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
ptr[i] = min;
return (ptr);
}

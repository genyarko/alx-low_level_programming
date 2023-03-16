#include "lists.h"
#include <stdlib.h>
/**
* dlistint_len - Returns the number of elements in a linked list.
* @h: Pointer to const dlistint_t list.
*
* Return: Number of elements in list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count;
for (count = 0; h != NULL; count++)
h = h->next;
return (count);
}

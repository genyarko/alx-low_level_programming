#include "lists.h"
/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to the head of the list.
* Return: the size of the list that was free’d.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
size_t i = 0;
if (h == NULL)
return (0);
while (*h != NULL)
{
tmp = *h;
*h = (*h)->next;
free(tmp);
i++;
if (*h >= tmp)
{
*h = NULL;
return (i);
}
}
*h = NULL;
return (i);
}

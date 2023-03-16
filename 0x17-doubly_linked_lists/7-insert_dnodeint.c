#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: double pointer to head of linked list
* @idx: index of list to add new node
* @n: value to store in new node
*
* Return: address of new node, or NULL for failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp;
unsigned int i;
if (!h)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
if (idx == 0)
return (add_dnodeint(h, n));
temp = *h;
for (i = 0; i < idx - 1; i++)
{
if (!temp)
{
free(new);
return (NULL);
}
temp = temp->next;
}
new->next = temp->next;
new->prev = temp;
if (temp->next)
temp->next->prev = new;
temp->next = new;
return (new);
}

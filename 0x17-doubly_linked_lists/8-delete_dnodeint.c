#include "lists.h"
#include <stdlib.h>
/*
* delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
* @head: pointer to the head of linked list
* @index: index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp, *current;
if (*head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}
while (current != NULL && i < index)
{
current = current->next;
if (current == NULL && i != index)
return (-1);
i++;
}
tmp = current;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
if (tmp->prev != NULL)
tmp->prev->next = tmp->next;
free(tmp);
return (1);
}

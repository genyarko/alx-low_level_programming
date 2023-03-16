#include "lists.h"
/**
* get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: index of the node, starting from 0
*
* Return: the nth node of a dlistint_t linked list, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *list;
unsigned int count;
list = head;
for (count = 0; count < index; count++)
{
if (list == NULL)
return (NULL);
list = list->next;
}
return (list);
}

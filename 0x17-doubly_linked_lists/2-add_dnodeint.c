#include "lists.h"
#include <stdio.h>
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to the head of the list
* @n: number to add to the new node
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new_node;
new_node->next = (*head);
(*head) = new_node;
}
else
{
(*head) = new_node;
new_node->next = NULL;
}
return (new_node);
}

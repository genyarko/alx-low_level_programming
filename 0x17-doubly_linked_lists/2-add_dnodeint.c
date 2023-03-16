#include "lists.h"
#include <stdio.h>
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to the head of the list
* @n: value of the new node to add
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}

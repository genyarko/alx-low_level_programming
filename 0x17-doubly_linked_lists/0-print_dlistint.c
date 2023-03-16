#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - prints all elements of a doubly linked list
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int num_nodes = 0;
const dlistint_t *temp;
if (h == NULL)
return (0);
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
num_nodes++;
}
return (num_nodes);
}

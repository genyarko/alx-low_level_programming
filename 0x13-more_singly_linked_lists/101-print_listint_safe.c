#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to the head of the list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *node = head;
size_t count = 0;
size_t i;
if (head == NULL)
exit(98);
while (node != NULL)
{
for (i = 0; i < count; i++)
{
if (node == head + i)
{
printf("-> [%p] %d\n", (void *)node, node->n);
return (count);
}
}
printf("[%p] %d\n", (void *)node, node->n);
count++;
node = node->next;
}
return (count);
}

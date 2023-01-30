#include "lists.h"
#include <stdlib.h>
/**
* print_listint_safe - prints a listint_t linked list.
* @head: pointer to the head of the list.
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *temp = head;
if (head == NULL)
exit(98);
while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
i++;
if (temp >= head)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
break;
}
}
return (i);
}

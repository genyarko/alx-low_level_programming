#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
* @head: head of the dlistint_t linked list
*
* Return: the sum of the data or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head) /* Loop until head is NULL */
{
sum += head->n;
head = head->next; /* Advance one node */
}
return (sum);
}

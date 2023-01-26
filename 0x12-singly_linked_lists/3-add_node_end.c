/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer of list_t list
* @str: string to duplicate
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp = *head;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}

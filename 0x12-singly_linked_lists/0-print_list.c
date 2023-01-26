#include <stdio.h>
#include <stdlib.h>
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}
list_t;
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
i++;
}
return (i);
}

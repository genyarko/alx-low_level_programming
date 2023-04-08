#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: pointer to the newly created hash table
*/
typedef struct hash_table
{
unsigned long int size;
void **array;
}
hash_table_t;
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = malloc(sizeof(hash_table_t));
if (ht == NULL) {
return NULL; // out of memory
}
ht->size = size;
ht->array = calloc(size, sizeof(void *));
if (ht->array == NULL)
{
free(ht);
return (NULL); // out of memory
}
return (ht);
}

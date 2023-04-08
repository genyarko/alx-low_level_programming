#include <stdlib.h>
/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: pointer to the newly created hash table
*/
typedef struct {
// Define the structure of each element of the hash table here
// ...
}
hash_table_element_t;
typedef struct {
unsigned long int size;
hash_table_element_t* array;
}
hash_table_t;
hash_table_t* hash_table_create(unsigned long int size) {
hash_table_t* hash_table = (hash_table_t*) malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return NULL;
}
hash_table->size = size;
hash_table->array = (hash_table_element_t*) calloc(size, sizeof(hash_table_element_t));
if (hash_table->array == NULL)
{
free(hash_table);
return NULL;
}
return hash_table;
}

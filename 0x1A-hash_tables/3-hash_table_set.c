#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

typedef struct hash_node {
  char *key;
  char *value;
  struct hash_node *next;
} hash_node_t;

typedef struct hash_table {
  unsigned long int size;
  hash_node_t **array;
} hash_table_t;

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
  unsigned long int hash;
  int a;

  hash = 5381;
  while ((a = *str++))
  {
    hash = ((hash << 5) + hash) + a; /* hash * 33 + a */
  }
  return (hash);
}

/**
 * key_index - compute the index of a key in the hash table
 * @key: the key to hash
 * @size: the size of the hash table's array
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const char *key, unsigned long int size)
{
  unsigned long int hash = hash_djb2((const unsigned char *)key);
  unsigned long int index = hash % size;
  return index;
}

/**
 * hash_table_set - add or update a key/value pair in the hash table
 * @ht: the hash table to modify
 * @key: the key string to add/update
 * @value: the value string to associate with the key
 *
 * Return: 1 if successful, 0 if an error occurred
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;
  hash_node_t *node, *head;

  if (ht == NULL || key == NULL || *key == '\0') {
    return 0; // invalid arguments
  }

  index = key_index(key, ht->size);
  head = ht->array[index];

  // check if the key already exists in the hash table
  for (node = head; node != NULL; node = node->next) {
    if (strcmp(node->key, key) == 0) {
      // update the value of an existing key
      char *new_value = strdup(value);
      if (new_value == NULL) {
        return 0; // out of memory
      }
      free(node->value);
      node->value = new_value;
      return 1; // success
    }
  }

  // create a new node for the key/value pair
  node = malloc(sizeof(hash_node_t));
  if (node == NULL) {
    return 0; // out of memory
  }
  node->key = strdup(key);
  if (node->key == NULL) {
    free(node);
    return 0; // out of memory
  }
  node->value = strdup(value);
  if (node->value == NULL) {
    free(node->key);
    free(node);
    return 0; // out of memory
  }
  // add the new node at the beginning of the list for this index
  node->next = head;
  ht->array[index] = node;
  return 1; // success
}

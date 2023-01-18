#include <stdlib.h>
#include "dog.h"
/**
* _strlen - Returns the length of a string
* @s: String to check
*
* Return: Length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int i, namelen, ownerlen;
if (name == NULL || owner == NULL)
return (NULL);
namelen = _strlen(name);
ownerlen = _strlen(owner);
name_copy = malloc(sizeof(char) * namelen + 1);
if (name_copy == NULL)
return (NULL);
owner_copy = malloc(sizeof(char) * ownerlen + 1);
if (owner_copy == NULL)
{
free(name_copy);
return (NULL);
}
for (i = 0; i < namelen; i++)
name_copy[i] = name[i];
name_copy[namelen] = '\0';
for (i = 0; i < ownerlen; i++)
owner_copy[i] = owner[i];
owner_copy[ownerlen] = '\0';
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
free(name_copy);
free(owner_copy);
return (NULL);
}
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}

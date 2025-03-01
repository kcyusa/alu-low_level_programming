#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Calculates string length.
 * @str: Pointer to the string.
 * Return: String length.
 */
int _strlen(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
ptr++;
}
return (ptr - str);
}

/**
 * _strcpy - copy from src to dest
 * @src: Pointer to the source.
 * @dest: Pointer to the destination.
 * Return: new destination.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

if (src == NULL || dest == NULL)
{
return NULL;
}
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}


/**
 * new_dog - Creates a new dog with a copy of name and owner.
 * @name: Pointer to the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to the owner's name.
 *
 * Return: Pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;

if (name == NULL || owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
_strcpy(name_copy, name);
owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
_strcpy(owner_copy, owner);

d->name = name_copy;
d->age = age;
d->owner = owner_copy;
return (d);
}


/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

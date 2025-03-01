#include "dog.h"
#include <stdlib.h>

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

if (name == NULL || owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
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

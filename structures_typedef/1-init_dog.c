#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

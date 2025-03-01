#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a dog's attributes.
 * @name: Pointer to the dog's name (string).
 * @age: The dog's age (float).
 * @owner: Pointer to the owner's name (string).
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

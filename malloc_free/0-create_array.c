#include <stdlib.h>
#include "main.h"

/**
 * create_array - assigns the arr
 * @size: size of array
 * @c: initial character
 * Return: Always array.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

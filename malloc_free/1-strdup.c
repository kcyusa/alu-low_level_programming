#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate
 *@str: string to duplicate
 * Return: duplicate string.
 */
#include <stdlib.h>

char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
dup[i] = str[i];
}
return (dup);
}

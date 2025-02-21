#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate
 *@str: string to duplicate
 * Return: duplicate string.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len, i;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
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

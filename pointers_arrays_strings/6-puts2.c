#include "main.h"
#include <stdio.h>
/**
 * puts2 -  function to move every other two
 *
 * @str: pointer to characters
 * Return: none
 */
void puts2(char *str)
{
int i;
if (str == NULL)
{
return;
}
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

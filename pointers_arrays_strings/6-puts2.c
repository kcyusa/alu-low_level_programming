#include "main.h"
/**
 * puts2 -  function to move every other two
 *
 * @str: pointer to characters
 * Return: none
 */
void puts2(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}

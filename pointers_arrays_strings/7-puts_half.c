#include "main.h"
/**
 * puts_half -  function to print half
 *
 * @str: pointer to characters
 * Return: none
 */
void puts_half(char *str)
{
int length = 0, start;
while (str[length])
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2 + 1;
}
while (str[start])
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}

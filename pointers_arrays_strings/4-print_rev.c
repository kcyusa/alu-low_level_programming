/**
 * print_rev - print function in reverse
 *
 * @s: pointer to characters
 * Return: none
 */
#include "main.h"
void print_rev(char *s)
{
char *end = s;
while (*end)
{
end++;
}
end--;
while (end >= s)
{
_putchar(*end);
end--;
}
_putchar('\n');
}

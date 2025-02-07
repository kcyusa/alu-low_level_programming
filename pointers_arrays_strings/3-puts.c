#include "main.h"
/**
 * _puts - print function
 *
 * @str: pointer to characters
 * Return: none
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

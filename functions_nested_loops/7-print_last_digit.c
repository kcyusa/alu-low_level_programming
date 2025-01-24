#include "main.h"
/**
 * print_last_digit - makes the absolute value
 * @n: The character to check (in ASCII)
 *
 *
 * Return: n
 */
int print_last_digit(int n)
{
int digit = n % 10;
if (digit  < 0)
{
digit = digit * -1;
}
_putchar('0' + digit);
return (digit);
}

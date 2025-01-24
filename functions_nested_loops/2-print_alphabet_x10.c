#include "main.h"
/**
 * print_alphabet_x10 - Writes a single character to the standard output
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
char letter;
int number;
for (number = 0; number < 10; number++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}

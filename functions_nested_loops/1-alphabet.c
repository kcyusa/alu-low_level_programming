#include "main.h"
/**
 * print_alphabet - Writes a single character to the standard output
 *
 * Return: None
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

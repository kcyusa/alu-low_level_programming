#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char text[] = "_putchar";
int i;

for (i = 0; text[i] != '\0'; i++)
{
my_function(text[i]);
}
my_function('\n');
return (0);
}

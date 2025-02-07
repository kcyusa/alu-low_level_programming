/**
 * rev_string -  function to reverse
 *
 * @s: pointer to characters
 * Return: none
 */
#include "main.h"
void rev_string(char *s)
{
char *start = s;
char *end = s;
while (*end)
{
end++;
}
end--;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}

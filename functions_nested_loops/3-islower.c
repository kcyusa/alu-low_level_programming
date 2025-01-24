#include <ctype.h>
/**
 * _islower - Writes a single character to the standard output
 * @c: ASCII notation
 * Return: 1 or 0
 */
int _islower(int c)
{
int res = islower(c);
if (res == 0)
{
return (0);
}
else
{
return (1);
}
}

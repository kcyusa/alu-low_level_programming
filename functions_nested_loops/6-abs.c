/**
 * _abs - makes the absolute value
 * @n: The character to check (in ASCII)
 *
 *
 * Return: n
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (n * -1);
}
}

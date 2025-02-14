/**
 * _pow_recursion - returns power of a number
 * @x: number to calculate
 * @y: number to raise to
 * Return: power of recursion
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

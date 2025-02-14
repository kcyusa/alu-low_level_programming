#include "main.h"
/**
 * find_sqrt - calculates square root of a number
 * @n: number to calculate
 * @guess: guesses
 * Return: square root of recursion
 */

int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number to calculate
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_sqrt(n, 0));
}

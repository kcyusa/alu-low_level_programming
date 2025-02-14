#include "main.h"

/**
 * is_prime_helper - find if a number is prime using recursion
 * @n: number to calculate
 * @divisor: divisor to use
 * Return: 1 if true 0 if false
 */

int is_prime_helper(int n, int divisor)
{
if (divisor * divisor > n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - find if a number is prime
 * @n: number to calculate
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_prime_helper(n, 2));
}

#include<stdio.h>
/**
 * print_array -  function to print all array
 *
 * @a: pointer to characters
 * @n: number of elements
 * Return: none
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

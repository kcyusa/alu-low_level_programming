#include<stdio.h>
/**
* print_to_98 - adds two numbers
* @n: iteration number
* Description: This function prints to 98
* Return: none
*/

void print_to_98(int n)
{
if (n == 98)
{
printf("%d", n);
}
else if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}

}
else
{
int i;
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}

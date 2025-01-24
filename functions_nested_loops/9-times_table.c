#include "main.h"
/**
 * times_table - Prints multiplication table
 *
 * Description: This function prints the multiplication table
 */

void times_table(void)
{

int i, j;
    char digit1, digit2;

    for (i = 0; i < 10; i++)  
    {
        for (j = 0; j < 10; j++) 
        {
            int product = i * j;

            
            if (product < 10)
            {
                if (j != 0) 
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                _putchar(product + '0');
            }
            else  
            {
                digit1 = (product / 10) + '0'; 
                digit2 = (product % 10) + '0'; 

                if (j != 0) 
                {
                    _putchar(' ');
                }
                _putchar(digit1);
                _putchar(digit2);
            }

           
            if (j != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}

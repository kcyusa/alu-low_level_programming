#include "main.h"
#include <unistd.h>
/**
 * my_function - Writes a single character to the standard output
 * @c: The character to be written
 *
 * Description: This function takes a single character as input
 * and writes it to the standard output using the write system call.
 * It is a low-level implementation that bypasses higher-level
 * buffering.
 *
 * Return: None
 */
void my_function(char c)
{
write(1, &c, 1);
}

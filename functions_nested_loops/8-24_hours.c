#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 * Description: This function prints the time in hours and minutes format,
 * from `00:00` to `23:59`, incrementing by one minute at a time.
 */
void jack_bauer(void)
{
int hour, minute;
char h1, h2, m1, m2;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
h1 = (hour / 10) + '0';
h2 = (hour % 10) + '0';
m1 = (minute / 10) + '0';
m2 = (minute % 10) + '0';
_putchar(h1);
_putchar(h2);
_putchar(':');
_putchar(m1);
_putchar(m2);
_putchar('\n');
}
}
}

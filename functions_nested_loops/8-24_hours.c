#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 * Description: This function prints the time in hours and minutes format,
 * from `00:00` to `23:59`, incrementing by one minute at a time.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}

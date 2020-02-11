#include "holberton.h"

/**
 * times_table - show the last digit of a number.
 */

void times_table(void)
{
int a, b, c, d, e;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c >= 10)
{
d = c / 10;
e = c % 10;
_putchar(d + '0');
_putchar(e + '0');
}
else
{
_putchar(c + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
if (c < 10)
_putchar(' ');
}
}
_putchar('\n');
}
}


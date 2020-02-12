#include "holberton.h"

/**
 *  print_times_table- show the last digit of a number.
 *  @n: The int to multiply.
 */

void print_times_table(int n)
{
int a, b, c, d, e, f;

if (n > 15 || n < 0)
return;

for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (c >= 100)
{
d = (c / 10) / 10;
e = c  % 10;
f = (c / 10) % 10;
_putchar(',');
_putchar(' ');
_putchar(d + '0');
_putchar(f + '0');
_putchar(e + '0');
}
else if (c >= 10)
{
d = c / 10;
e = c % 10;
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(d + '0');
_putchar(e + '0');
}
else if (b == 0)
{
_putchar(c + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
}
_putchar('\n');
}
}

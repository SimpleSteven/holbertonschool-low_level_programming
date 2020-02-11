#include "holberton.h"

/**
 * print_sign - check for valor.
 * @n: The int to print
 * Return: 1 if n is lowercase.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
n = 1;
}
else if (n == 0)
{
_putchar('0');
n = 0;
}
else
{
_putchar('-');
n = -1;
}
return (n);
}

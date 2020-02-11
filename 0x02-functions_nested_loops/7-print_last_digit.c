#include "holberton.h"

/**
 * print_last_digit - show the last digit of a number.
 * @n: The int to print
 * Return: show the positive value.
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
n %= 10;
_putchar(n + '0');
return (n);
}


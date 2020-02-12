#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - show the last digit of a number.
 * @n: first int.
 * Return: return the add.
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
printf("\n");
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
printf("\n");
}
else if (n == 98)
printf("98\n");
}

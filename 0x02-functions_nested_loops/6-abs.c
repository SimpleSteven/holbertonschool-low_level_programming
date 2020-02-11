#include "holberton.h"

/**
 * int _abs - change to positive if  int is negative.
 * @n: The int to print
 * Return: show the positive value.
 */

int _abs(int n)
{
if (n < 0)
n *= -1;
return (n);
}

#include <stdio.h>

/**
 * _isalpha - check lowercaser.
 * @n: The int to print
 * Return: 1 if n is lowercase.
 */

int _isalpha(int n)
{
if ((n > 64 && n < 91) || (n > 98 && n < 123))
n = 1;
else
n = 0;
return (n);
}


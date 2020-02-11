#include <stdio.h>

/**
 * _islower - check lowercaser.
 *
 * Return: 1 if n is lowercase.
 */

int _islower(int n)
{
if (n > 96 && n < 123)
n = 1;
else
n = 0;
return (n);
}

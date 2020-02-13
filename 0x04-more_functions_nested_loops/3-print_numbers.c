#include <unistd.h>
#include "holberton.h"

/**
 * print_numbers - writes the character c to stdout
 */

void print_numbers(void)
{
char a;
for (a = '0'; a <= '9'; ++a)
_putchar(a);
_putchar('\n');
}

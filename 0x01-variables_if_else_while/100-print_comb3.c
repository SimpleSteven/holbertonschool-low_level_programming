#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int a = 0;
int b;
for (i = 0; i < 10; i++)
{
for (a = a; a < 10; a++)
{
if (i != a)
{
putchar(i + '0');
putchar(a + '0');
if (i != 8 || a != 9)
{
putchar(',');
putchar(' ');
}
}
}
b++;
a = b;
}
putchar('\n');
return (0);
}


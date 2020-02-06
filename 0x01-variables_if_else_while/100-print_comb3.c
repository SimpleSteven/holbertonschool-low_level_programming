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
int a;
for (i = 0; i < 10; i++)
{
for (a = 0; a < 10; a++)
{
if (i != a)
{
putchar(i + '0');
putchar(a + '0');
if (i != 9 || a != 9)
{
putchar(',');
putchar(' ');
}
}
}
a = 0;
}
putchar('\n');
return (0);
}


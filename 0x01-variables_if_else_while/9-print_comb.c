#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 9)
{
putchar(i + '$');
}
else
{
putchar(i + ',');
}
}
putchar('\n');
return (0);
}
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

char a;

for (a = 'a'; a <= 'z'; ++a)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar('\n');
return (0);
}

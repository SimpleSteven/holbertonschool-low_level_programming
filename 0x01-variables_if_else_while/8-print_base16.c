#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
for (a = 0; a < 16; a++)
{
long int decn = a, rmd, q, dn = 0, m, l;
int i = 1, j, tmp;
char s;
q = decn;
for (l = q; l > 0; l = l / 16)
{
tmp = l % 16;
if (tmp < 10)
tmp = tmp + 48; else
tmp = tmp + 55;
dn = dn * 100 + tmp;
}
for (m = dn; m > 0; m = m / 100)
{
s = m % 100;
putchar (tolower(s));
}
}
putchar ('\n');
}

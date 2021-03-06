#include "holberton.h"

/**
 * _atoi - check the code for Holberton School students.
 * @s: the char
 * Return: the float;
 */

int _atoi(char *s)
{
	int i, crrtval, sign;
	unsigned int rta;

	i = 0;
	rta = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		crrtval = s[i];
		if (crrtval >= 48 && crrtval <= 57)
		{
			if (rta > 0)
			{
				rta = rta * 10 + crrtval - 48;
			}
			else
				rta = crrtval - 48;
		}
		else if (crrtval == 45)
		{
			sign *= -1;
		}
		else if (crrtval > 0 && rta > 0)
		{
			break;
		}
		i++;
	}
	return (rta * sign);
}

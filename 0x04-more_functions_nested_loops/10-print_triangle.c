#include <unistd.h>
#include "holberton.h"

/**
 * print_triangle - writes the character c to stdout
 * @size: the size
 */
 
void print_triangle(int size)
 {
         int a, b;

         if (size > 0)
         for (a = 0; a < size; a++)
         {
                 for (b = 1; b <= size; b++)
                 {
                         if (size > 1 && size - b > a)
                         _putchar(' ');
			 else
                         _putchar(35);
                 }
 
                 _putchar('\n');
         }
         else
         _putchar('\n');
 }


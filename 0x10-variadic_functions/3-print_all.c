#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_all - the function
  * @format: the const
  */

void print_all(const char * const format, ...)
{
	op_s datas[] = {
	{'c', _char},
	{'i', _int},
	{'f', _float},
	{'s', _string}

};

	char *comma = "";
	int count = 0, count2 = 0;
	va_list args;

	va_start(args, format);
	while (format[count] != '\0')
	{
		count2 = 0;
		if (format[count] != 'c' && format[count] != 'i' &&
			format[count] != 'f' && format[count] != 's')
		{
			count++;
			continue;
		}
		while (count2 < 4)
		{
			if (datas[count2].type == format[count])
			{
				printf("%s", comma);
				datas[count2].f(args);
				comma = ", ";
			}
			count2++;
		}
		count++;
	}
	printf("\n");
	va_end(args);
}

/**
  * _char - the function
  * @args: the data
  *
  */

void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * _int - the function
  * @args: the data
  */

void _int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
  * _float - the function
  * @args: the data
  */

void _float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * _string - the function
  * @args: the data
  */

void _string(va_list args)
{
	args == NULL ? printf("(nil)") :
	printf("%s", va_arg(args, char *));
}

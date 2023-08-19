#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything
 *
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list l_args;
	char *s;
	char *separ = "";
	char c;
	int num;
	float fl;
	int i = 0;

	va_start(l_args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(l_args, int);
					printf("%s%c", separ, c);
					break;
				case 'i':
					num = va_arg(l_args, int);
					printf("%s%d", separ, num);
					break;
				case 'f':
					fl = va_arg(l_args, double);
					printf("%s%f", separ, fl);
					break;
				case 's':
					s = va_arg(l_args, char*);
					if (s == NULL)
						printf("(nil)");
					else
						printf("%s%s", separ, s);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l_args);
}

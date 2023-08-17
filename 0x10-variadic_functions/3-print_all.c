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
	char c;
	int i = 0, in;
	float fl;

	va_start(l_args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
	c = va_arg(l_args, int);
					printf("%c", c);
					break;
				case 'i':
	in = va_arg(l_args, int);
					printf("%d", in);
					break;
				case 'f':
	fl = va_arg(l_args, double);
					printf("%f", fl);
					break;
				case 's':
	s = va_arg(l_args, char*);
					printf("%s", s);
					break;
				default:
					continue;
			}
			if (i < format[i])
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(l_args);
}


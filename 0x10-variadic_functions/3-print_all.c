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
	int i = 0;
	char *sep = "";

	va_start(l_args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(l_args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(l_args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(l_args, double));
					break;
				case 's':
					s = va_arg(l_args, char*);
					if (s == NULL)
						printf("(nil)");
					else
						printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = " ;";
			i++;
		}
	}
	printf("\n");
	va_end(l_args);
}


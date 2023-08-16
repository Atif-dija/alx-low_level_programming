#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: input of  function
 * @f: a pointer to function that prints a name as is and a name in uppercase
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

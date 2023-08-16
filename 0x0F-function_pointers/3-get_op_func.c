#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 *
 * @s: name of the function
 *
 * Return: a pointer to the correct function
 * or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (i < 5)
	{
		if (ops[i].op != NULL && *(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}




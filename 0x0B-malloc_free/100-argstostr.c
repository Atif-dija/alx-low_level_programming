#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 *
 * @ac: width of av
 * @av: 2 dimentional
 *
 * Return:  a pointer to a new string
 * or return NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
	}
	n += ac;
	str = malloc(sizeof(char) * n + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;

	}
	return (str);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: input of function
 * @max: input of function
 *
 * Return: a pointer tab or NULL
 */

int *array_range(int min, int max)
{
	int *tab, i, m;

	if (min > max)
		return (NULL);
	m = (max - min) + 1;
	tab = malloc(m * sizeof(int));
	if (!tab)
		return (NULL);
	for (i = 0; i < m && tab[i] <= max; i++)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
}


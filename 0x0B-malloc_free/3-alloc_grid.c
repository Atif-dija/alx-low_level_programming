#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional
 * or return NULL
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(*tab) * height);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == NULL)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
			for (j = 0; j < width; i++)
			{
				tab[i][j] = 0;
			}
		}
	}
	return (tab);
}


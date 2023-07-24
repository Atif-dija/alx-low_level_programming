#include "main.h"

/**
 * rev_string -  function that reverses a string
 *
 *@s: input of function
 */

void rev_string(char *s)
{

	char *first = s;
	char *last = s;
	char swap;

	while (*last != '\0')
	{
		last++;
	}
	last--;

	while (first < last)
	{
		swap = *first;
		*first = *last;
		*last = swap;

		first++;
		last--;
	}
}

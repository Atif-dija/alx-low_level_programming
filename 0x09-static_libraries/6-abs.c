#include "main.h"

/**
 * _abs - Entry point
 *
 * computes the absolute value of an integer
 *
 *@integer: input of function
 *
 *Return:integer if intiger > 0
 *	 if integer <0 always -integer (Succes)
 */

int _abs(int integer)
{
	if (integer > 0)
		return (integer);
	else if (integer < 0)
		return (-integer);
	return (0);
}

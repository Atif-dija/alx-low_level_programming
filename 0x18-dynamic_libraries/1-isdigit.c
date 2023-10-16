/**
 * _isdigit - this function checks for uppercase character
 *
 * @c: cheks intuput of function
 *
 * Return: 1 if c is digit
 *	0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}

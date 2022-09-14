#include "main.h"

/**
 * _isalpha - function to check if c ia letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
	{
		return (1);
	}
	else
		return (0);
}

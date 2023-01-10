#include "main.h"

/**
 * _isdigit - check whether c is a digit or not
 * @c: the parameter to be checked
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

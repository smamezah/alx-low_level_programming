#include "main.h"

/**
 * _isalpha - checks if the argument is an alphabet
 * @c : this datatype of the parameter is int
 *
 * Return: return either 1 or 0.
 */

int _isalpha(int c)
{
	int ret;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		ret = 1;
	else
		ret = 0;

	return (ret);
}

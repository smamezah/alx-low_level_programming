#include "main.h"

/**
 *_islower - checks for lowercase
 * @c : the paramter is of type c
 * Return: return either 1 or 0
 */

int _islower(int c)
{
	int ret;

	if (c >= 97 && c <= 122)
		ret = 1;
	else
		ret = 0;

	return (ret);
}


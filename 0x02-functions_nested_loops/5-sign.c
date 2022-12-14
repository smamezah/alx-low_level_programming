#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n : the data type is int
 * Return: Returns 1, 0 or -1.
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else
	{
		ret = -1;
		_putchar('-');
	}
	return (ret);
}



#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: base number
 * @y: exponent number
 * Return: returns the value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

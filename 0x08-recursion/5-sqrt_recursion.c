#include "main.h"

/**
 * helperfunction - checks whether sqrt of a number exists
 * @num: number
 * @xroot: possible root
 * Return: return square of number
 * on error returns -1.
 */
int helperfunction(int num, int xroot)
{
	if ((xroot * xroot) == num)
	{
		return (xroot);
	}
	else
	{
		if ((xroot * xroot) > num)
			return (-1);
		else
			return (helperfunction(num, xroot + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}

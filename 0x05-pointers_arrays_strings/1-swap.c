#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: one integer
 * @b: the other integer
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}

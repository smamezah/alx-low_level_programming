#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: one integer
 * @b: the other integer
 */

void swap_int(int *a, int *b)
{
	int a, b;

	a = *a;
	b = *b;

	*a = b;
	*b = a;
}

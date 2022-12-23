#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
		i++;
	}
}


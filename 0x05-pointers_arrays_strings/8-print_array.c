#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements in an array
 * @a: a is the array
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (t != n - 1)
			printf(", ");
	}
	_putchar('\n');
}

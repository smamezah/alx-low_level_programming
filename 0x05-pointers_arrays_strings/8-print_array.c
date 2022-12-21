#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements in an array
 * @a: a is the array
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	printf("%d", a[0]);

	int i;

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	_putchar('\n');
}

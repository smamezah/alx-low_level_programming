#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers to 98
 * @n : data type is an int
 */

void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		printf("%d", n);
		for (j = n + 1; j <= 98; j++)
			printf(", %d", j);
	}
	else if (n == 98)
		printf("%d", n);

	else
	{
		printf("%d", n);
		for (j = n - 1; j >= 98; j--)
			printf(", %d", j);
	}
	_putchar('\n');
}



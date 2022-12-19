#include "main.h"

/**
 * print_line - print lines
 * @n: number of lines
 */

void print_line(int n)
{
	if (num <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= num; i++)
			_putchar('_');
		_putchar('\n');
	}
}

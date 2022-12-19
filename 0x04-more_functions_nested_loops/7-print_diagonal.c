#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j <= i; j++)
			{
				if (j == 1)
					continue;
				else
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

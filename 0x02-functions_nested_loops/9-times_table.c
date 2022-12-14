#include "main.h"

/**
 * times_table - prints the 9 timetable
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = 0; x <= 9; x++)
			{
				_putchar((j * x) + '0');
				if (x != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
					break;
			}

		}
		_putchar('\n');
	}
}

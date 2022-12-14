#include "main.h"

/**
 * times_table - prints the 9 timetable
 */

void times_table(void)
{
	int num, multy, prod;

	for (num = 0; num <= 10; num++)
	{
		_putchar(num + '0');

		for (multy = 0; multy < 10; multy++)
		{
			prod = num * multy
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar(prod + '0');
		}
		_putchar('\n');
	}
}


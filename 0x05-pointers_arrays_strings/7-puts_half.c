#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);



	if ((len % 2) == 0)
	{
		i = len / 2;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		i = (len - 1) / 2;
		for (i = i + 1; i < len; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}

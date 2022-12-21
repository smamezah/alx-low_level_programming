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

	i = len / 2;

	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

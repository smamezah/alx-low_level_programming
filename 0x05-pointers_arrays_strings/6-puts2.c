#include "main.h"

/**
 * puts2 - prints every other string
 * @str: string
 */

void puts2(char *str)
{
	int i = 0, j;

	while (*str != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}

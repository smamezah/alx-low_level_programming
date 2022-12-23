#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: string
 * Return: returns a string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
		x = str[i];
		if (x >= 97 && x <= 122)
		{
			x = x - 32;
			str[i] = (char) x;
		}
		i++;
	}
	return (str);
}

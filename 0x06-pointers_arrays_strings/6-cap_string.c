#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @n: string
 * Return: returns n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		while (n[i] >= 'a' && n[i] <= 'z')
		{
			if (n[i - 1] == ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
				n[i - 1] == '}' ||
				i == 0)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	return (n);
}

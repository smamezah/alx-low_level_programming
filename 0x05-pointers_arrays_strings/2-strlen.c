#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the given string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = sizeof(*s) / sizeof(*s[0]);

	return (len);
}

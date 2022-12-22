#include "main.h"

/**
 * _strncpy - copy one string of up to n charcters into another
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

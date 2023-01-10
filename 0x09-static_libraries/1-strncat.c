#include "main.h"

/**
 * _strncat - concatenates n characters
 * @dest: destination
 * @src: string to be appended
 * @n: number of characters
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

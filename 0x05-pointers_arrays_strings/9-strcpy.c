#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: first string
 * @src: second string
 * Return: returns the copied strings
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	
	*(dest * len) = '\0';
	return (dest);
}

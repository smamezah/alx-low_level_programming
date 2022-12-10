#include <stdio.h>

/**
 * main - prints all numbers of the hexadecimal
 * Return: always returns 0
 */

int main(void)
{
	int a = 0;

	char b = 'a';

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);

	putchar('\n');
	return (0);
}

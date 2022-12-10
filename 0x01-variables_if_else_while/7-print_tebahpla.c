#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: returns 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

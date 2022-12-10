#include <stdio.h>

/**
 * main - this code prints the alphabets in both cases
 * Return: this code returns 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}


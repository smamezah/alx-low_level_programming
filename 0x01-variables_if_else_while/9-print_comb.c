#include <stdio.h>

/**
 * main - prints all possible combination of single digits
 * Return: returns 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num < 9)
		{
			putchar(',');
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}

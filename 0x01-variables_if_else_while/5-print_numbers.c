#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: returns 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

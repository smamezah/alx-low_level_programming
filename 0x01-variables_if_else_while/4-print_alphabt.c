#include <stdio.h>

/**
 * main - this code prints the alphabets with exceptions
 * Return: return 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}

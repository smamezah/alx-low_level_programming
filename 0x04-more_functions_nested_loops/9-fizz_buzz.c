#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: always 0
 */

int main(void)
{
	int i = 2;
	
	printf("%d", 1);

	while (i < 101)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d ", i);
		i++;
	}
	printf("\n");
	return (0);
}

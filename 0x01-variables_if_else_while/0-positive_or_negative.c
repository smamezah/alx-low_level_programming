#include <stdio.h>
#include <time.h>
/**
 * main - this code generates a random number and determine whether the number is positive or negative
 * Return: return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0){
		printf("%d is negative", n);
	}
	else {
		printf("%d is positive", n);
	return (0);
}

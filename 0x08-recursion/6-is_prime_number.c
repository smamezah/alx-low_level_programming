#include "main.h"
/**
 * helperfunction - help determine prime numbers
 * @num: number
 * @i: possible factor
 * Return: 0 or 1
 */

int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - return 1 if prime and 0 if not prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}


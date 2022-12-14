#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i : in data type
 * Return: return the last digit
 */

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	_putchar(last + '0');

	return (last);
}

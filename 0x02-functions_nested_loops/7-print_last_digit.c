#include "holberton.h"
/**
 * _abs - returns 1 if lower 0 otherwise
 * @n: integer to be tested
 * Return: abs(n)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = _abs((n % 10));
	_putchar(lastdigit + 48);
	return (lastdigit);
}

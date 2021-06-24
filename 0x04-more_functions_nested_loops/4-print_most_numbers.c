#include "holberton.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 & 4
 * Description: prints all digits apart from 2 and 4
 * Return: 01356789
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

}

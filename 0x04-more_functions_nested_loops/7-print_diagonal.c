#include "holberton.h"

/**
 * print_diagonal- prints a diagonal line in the terminal
 * @n: number of times \ will be printed
 * Description: prints \ to make a diagonal line
 * Return: a diagonalline
 */

void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}

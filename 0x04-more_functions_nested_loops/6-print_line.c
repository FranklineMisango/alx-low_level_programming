#include "holberton.h"

/**
 * print_line- prints a line in the terminal
 * @n: number of times _ will be printed
 * Description: prints _ to make a line
 * Return: a line
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}

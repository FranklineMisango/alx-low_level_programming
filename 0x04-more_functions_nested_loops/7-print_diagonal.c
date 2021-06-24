#include "holberton.h"

/**
 * print_diagonal- prints a diagonal line in the terminal
 * @n: number of times \ will be printed
 * Description: prints \ to make a diagonal line
 * Return: a diagonalline
 */

void print_diagonal(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}

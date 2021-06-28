#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @str: string location
 * return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}

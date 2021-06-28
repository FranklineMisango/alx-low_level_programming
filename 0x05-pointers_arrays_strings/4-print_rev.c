#include "holberton.h"

/**
 * print_rev - reverses a string and prints it followed by a new line
 * @s: string location
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');

}

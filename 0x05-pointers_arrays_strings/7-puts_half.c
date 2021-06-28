#include "holberton.h"

/**
 * puts_half -prints half a string
 * @str: string location
 * Return: void
 */

void puts_half(char *str)
{
int len = 0;
for (str[len] != '\0'; len++)
;

for (int i = (len + 1) / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}

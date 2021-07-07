#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be output
 * Return:0 or string
 */

void _puts_recursion(char *s)
{
int i = 0;
char str;

if (s[i] == '\0')
{
_putchar();
}
str = s[i] + s[i + 1];
i++;
_putchar(str);
_putchar('\n');
}

#include "holberton.h"

/**
 * print_alphabet_x10- prints the alphabet 10 times
 *_putchar: Prints character
 *return: void
 */

void print_alphabet_x10(void)
{
int y = 1;
char x;

while (y <= 10)
{
x = 'a';
while (x < 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
y++;
}
}

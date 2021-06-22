#include "holberton.h"

/**
 *main- Entry point
 * print_alphabet - print the alphabet in lowercase
 *_putchar: Prints character
 *return: 0
 */

void print_alphabet(void)
{
char x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar(x);
}

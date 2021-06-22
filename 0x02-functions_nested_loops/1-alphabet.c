#include "holberton.h"

/**
 *main- Entry point
 *void print_alphabet(void)- print the alphabet
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
return (0);
}

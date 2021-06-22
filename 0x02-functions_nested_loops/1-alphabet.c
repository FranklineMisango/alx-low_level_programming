#include "holberton.h"

/**
 *print_alphabet- Entry point
 * print_alphabet- print lowercase alphabets
 *_putchar: Prints character
 *return: 0
 */

void print_alphabet(void)
{
char x = 'a';
 
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n') 
}

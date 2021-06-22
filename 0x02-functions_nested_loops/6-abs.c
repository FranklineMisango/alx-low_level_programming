#include "holberton.h"

/**
 * _abs - returns absolute value
 *_putchar: Prints character
 *@n: integer entered
 *Return: abs(n)
 *Description: returns absolute value
 */

int _abs(int n)
{
return (n < 0 ? -1 * n : n);
}

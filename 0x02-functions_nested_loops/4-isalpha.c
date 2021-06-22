#include "holberton.h"

/**
 * _isalpha - returns 0 or 1
 *_putchar: Prints character
 * @c: the character input
 *Return: 0 or 1
 */

int _isalpha(int c)
{
return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

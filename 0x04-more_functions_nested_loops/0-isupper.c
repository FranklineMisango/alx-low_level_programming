#include "holberton.h"

/**
 * _isupper - checks uppercase characters
 *_putchar - prints character
 * Description: 1 for uppercase & 0 otherwise
 * @c: entered input type integer
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}

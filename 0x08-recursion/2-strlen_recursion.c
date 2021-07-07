#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: 0 or i
 */

int _strlen_recursion(char *s)
{
int length;

length = 0;

if (*s)
{
length++;
length = length + _strlen_recursion(s + 1);
}
return (length);
}

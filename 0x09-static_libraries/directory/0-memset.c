#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: constant byte
 * @n: number of bytes of s to be filled by b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}

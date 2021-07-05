#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @S: source string
 * @accept: second string
 * Return: s or null
 */

char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
return (s);
}
}
s++;
}
return ('\0');
}

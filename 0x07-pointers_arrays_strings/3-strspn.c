#include "holberton.h"

/**
 * _strspn -gets the length of a prefix substring
 * @s: the string
 * @accept: another string
 * Return: number of bytes of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (s[i] == accept[i])
{
i++;
return (i);
}
}

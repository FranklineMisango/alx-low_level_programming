#include "holberton.h"

/**
 * _strspn -gets the length of a prefix substring
 * @s: the string
 * @accept: another string
 * Return: number of bytes of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
int index;
unsigned int c = 0;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
c++;
break;
}
else if (accept[index + 1] == '\0')
{
return (c);
}
}
s++;
}
return (c);
}

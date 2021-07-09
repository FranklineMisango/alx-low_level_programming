#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: the source string
 * @c: character to be located
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}

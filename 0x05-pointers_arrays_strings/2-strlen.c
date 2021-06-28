#include "holberton.h"

/**
 * _strlen - Returns the value of a string
 * @s: string location
 * Return: 1
 */

int _strlen(char *s)
{
int i;

for (i = 0; *s[i] != '\0'; ++i)
{
_putchar(i);
}
return (1);
}

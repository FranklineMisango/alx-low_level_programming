#include "holberton.h"

/**
 * _strlen - Returns the value of a string
 * @s: string location
 * Return: 1
 */

int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}

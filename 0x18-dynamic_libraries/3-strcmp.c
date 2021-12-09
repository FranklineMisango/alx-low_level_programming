#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{
int i;

<<<<<<< HEAD
=======

>>>>>>> 5d179a38c66a3849f65f2ecd12c64e5b73baf291
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
return (0);
}

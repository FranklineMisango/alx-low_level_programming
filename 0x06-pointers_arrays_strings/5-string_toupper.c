#include "holberton.h"

/**
 * *string_toupper - changes letters of string to uppercase
 * @s: pointer to string variable
 *
 * Return: string value
 */
char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (str);
}

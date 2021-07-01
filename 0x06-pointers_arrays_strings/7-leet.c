#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string variable
 * Return: str
 */
char *leet(char *str)
{
	int a, b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	for  (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{
			if (str[a] == lower[b] || str[a] == upper[b])
			{
				str[a] = numbers[b];
			}
		}
	}
	return (str);
}

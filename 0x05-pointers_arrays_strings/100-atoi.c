#include "holberton.h"

/**
 * _atoi - Converts string to integer
 * @s: the string holder
 * @i - the index of a value in the string
 * Return: i or 1
 */

int _atoi(char *s)
{
int sign = 1, resp = 0, firstNum = 0;

for (!(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '-')
{
sign *= -1;
}
}

for (int i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}

return (sign *resp);
}

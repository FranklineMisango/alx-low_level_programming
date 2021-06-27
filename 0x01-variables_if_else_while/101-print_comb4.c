#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c = 0;

while (c < 10)
{
a = 1;
b = 2;
while (a < 10)
{
while (b < 10)
if (c != a && c != b && a != b && c < a && c < b)
{
putchar('0' + c);
putchar('0' + a);
putchar('0' + b);
if (a + c + b != 26)
{
putchar(',');
putchar(' ');
}
}
a++;
}
c++;
}
b++;
}
putchar('\n');
return (0);
}

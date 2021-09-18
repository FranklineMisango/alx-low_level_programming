#include <stdio.h>
#include <unistd.h>

/**
 * main - starts the code
 * Description: prints a sentence
 * Return: 1
 */

int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, ch, sizeof(ch));
fwrite(stderr, "[stderr] : No string argument provided!\n");

return (1);
}

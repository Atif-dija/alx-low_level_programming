#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * prints whithout printf or puts functions
 *
 * Return: 1 (error)
*/

int main(void)

{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quote, sizeof(quote) - 1);
return (1);
}

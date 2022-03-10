#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1
 */
int main(void)
{

 // Get the character to be written
    char ch = 'and that piece of art is useful" - Dora Korpar, 2015-10-19\n, 58';
  
    // Write the Character to stdout
        putchar(ch);

	return (1);
}


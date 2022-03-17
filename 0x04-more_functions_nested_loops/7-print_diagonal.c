#include "main.h"

/**
 *  print_diagonal - funcitons that draws a diagonal line
 *  @n: number of times '\' is printed
 *  Description: can only use _putchar to print
 */
void print_diagonal(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('\');

		c++;
	}
	_putchar('\n');
}

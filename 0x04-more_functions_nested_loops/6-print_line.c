#include "main.h"

/**
 *  print_line - funcitons that draws a straight line
 *  @n: number of times '_' is printed
 *  Description: can only use _putchar to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{

		_putchar('_');

		c++;
	}
	_putchar('\n');
}

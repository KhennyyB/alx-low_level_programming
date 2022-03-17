#include "main.h"

/**
 * print_numbers - prints the numbers 0-9, followed by a new line
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{

		_putchar(i);
		i++;
	}
	_putchar('\n');
}

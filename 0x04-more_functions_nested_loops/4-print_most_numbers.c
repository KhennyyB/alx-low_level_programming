#include "main.h"
/**
 * print_most_numbers - prints the numbers 0-9, followed by a new line
 * Description: Do not print '2' and '4', use _putchar only twice
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}

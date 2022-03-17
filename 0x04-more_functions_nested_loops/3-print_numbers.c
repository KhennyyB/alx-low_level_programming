#include "main.h"

/**
 * print_numbers - prints the numbers 0-9, followed by a new line
 * Return: 0 on success
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{

		putchar(i);
		i++;						
	}
	putchar('\n');
	return (0);
}

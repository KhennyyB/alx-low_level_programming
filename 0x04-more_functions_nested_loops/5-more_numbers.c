#include "main.h"
/**
 * void more_numbers - prints 10x the numbers 0-14, followed by a new line
 * Description: You can only use _putchar three times
 */
void more_numbers(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = '0';
		while (c <= '14')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

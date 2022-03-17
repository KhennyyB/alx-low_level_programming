#include "main.h"
/**
 * more_numbers - prints 10x the numbers 0-14, followed by a new line
 * Description: You can only use _putchar three times
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			++j;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}

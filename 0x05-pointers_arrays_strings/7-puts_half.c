#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If number of chars is odd, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}

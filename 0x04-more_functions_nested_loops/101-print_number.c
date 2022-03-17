#include "main.h"

/**
 * print_number - print an integer 
 * Description: only use _putchar
 * Return: 0
 */
void print_number(int n)
{
	long num, a;

	a = 2;
	num = 612852475143;
	while (a < sqrt(num))
	{
		while (num % a == 0)
		{
			num = num / a;
			printf("%ld %ld\n", num, a);
		}
		a++;
	}
	printf("%ld\n", num);
	return (0);
}

#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else (n <= 1)
		n++;
		return (1);
	else
		return (n * factorial(n - 1));
}

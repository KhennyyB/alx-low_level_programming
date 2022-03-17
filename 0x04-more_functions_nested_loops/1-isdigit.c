#include "main.h"

/**
 * _isdigit - functions that checks for a digit
 * @c: int type number
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 57)

		return (1);
	else
		return (0);
}

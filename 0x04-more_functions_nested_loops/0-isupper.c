#include "main.h"

/**
 *_isupper - function that checks for uppercase character
 *@c - int type number
 *Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c);
{
	if (c > 'A' && c < 'Z')
		return (1);
	return (0);
}

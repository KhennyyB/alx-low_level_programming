#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int x, y;
	char subs[] = "aAeEoOtTlL";
	char leet[] = "43071";

	x = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; subs[y] != '\0'; y++)
			if (s[x] == subs[y])
				s[x] = leet[y / 2];
	}
	return (s);
}

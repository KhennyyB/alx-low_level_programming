#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 *
 *
 *
 */

int main(void)
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

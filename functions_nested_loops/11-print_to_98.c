#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98, separated by a comma and space.
 *
 * @n: the number to start from.
 *
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}

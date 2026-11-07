#include "main.h"

/**
 * print_line - draws a straight line of underscores
 * @n: the number of underscores to print
 *
 * Return: void
 */

void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}

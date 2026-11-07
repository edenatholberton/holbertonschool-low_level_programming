#include "main.h"

/**
 * print_diagonal - draws a diagonal line of backslashes
 * @n: the number of backslashes to print
 *
 * Return: void
 */

void print_diagonal(int n)
{

	int line = 0;
	int spaces;

	while (line < n)
	{
		spaces = 0;
		while (spaces < line)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}


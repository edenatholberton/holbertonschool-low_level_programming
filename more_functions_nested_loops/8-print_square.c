#include "main.h"

/**
 * print_square - prints a square of # characters
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int row = 0;
	int column = 0;

	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}

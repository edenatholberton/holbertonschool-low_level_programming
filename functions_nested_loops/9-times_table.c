#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing.
 */

void times_table(void)
{
	int row = 0;
	int column = 0;
	int product;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			product = row * column;
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
			}
			if (product >= 10)
			{
				_putchar('0' + product / 10);
			}
			_putchar('0' + product % 10);
			column++;
		}
		_putchar('\n');
		row++;
	}
}

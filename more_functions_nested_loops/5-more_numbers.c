#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * each followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int counter = 0;
	int number;

	while (counter < 10)
		{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
			number++;
		}
		_putchar('\n');
		counter++;
	}
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: the number to check ("r" is describing the parameter)
 *
 * Return: Value of last digit
 */

int print_last_digit(int r)
{
	int last;

	if (r < 0)
	{
		r = r * -1;
	}
	last = r % 10;
	_putchar ('0' + last);
	return (last);
}

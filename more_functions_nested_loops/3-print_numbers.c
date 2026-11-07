#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9, and a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char n = '0';

	while ((n >= '0') && (n <= '9'))
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

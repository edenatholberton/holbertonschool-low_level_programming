#include "main.h"

/**
 * print_alphabet_x10 - shall print the alphabet in lowercase 10 times.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 0;

	while (counter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';
	int comma = ',';
	int space = ' ';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(comma);
			putchar(space);
		}
		number++;
	}
	putchar('\n');

	return (0);
}

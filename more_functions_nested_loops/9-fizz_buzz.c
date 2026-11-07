#include "main.h"

/**
 * main - prints the numbers from 1 to 100, with Fizz, Buzz and FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (n == 100)
		{
			_putchar('1');
			_putchar('0');
			_putchar('0');
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n % 10 + '0');
		}
		if (n < 100)
		{
			_putchar(' ');
		}
			n++;
	}
	_putchar('\n');
	return (0);
}


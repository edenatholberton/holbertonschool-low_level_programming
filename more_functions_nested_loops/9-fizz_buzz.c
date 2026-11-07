#include <stdio.h>

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
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (n % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (n % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (n == 100)
		{
			putchar('1');
			putchar('0');
			putchar('0');
		}
		else if (n >= 10)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
		}
		else
		{
			putchar(n % 10 + '0');
		}
		if (n < 100)
		{
			putchar(' ');
		}
			n++;
	}
	putchar('\n');
	return (0);
}


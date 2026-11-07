#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, with Fizz, Buzz and FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
        int n = 1;
	char Fizz = 'f'
	char Buzz = 'b'
	char FizzBuzz = 'z'


	while (n <= 100)
        {
		if (100 / 3)
		{
			putchar('f')
		}
		else if (100 / 5)
		{
			putchar('b')
		}
		else (100 / 3 && 5)
		{
			putchar('z')
		}
                if (n == 100)
                {
                        putchar('1');
                        putchar('0');
                        putchar('0');
                }
                else
                {
                        if (n >= 10)
                        {
                                putchar(n / 10 + '0');
                        }
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


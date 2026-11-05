#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char cap = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * puts2 - prints every other character of a string, then a new line
 *
 * @str: pointer to the string to print
 *
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 1] != '\0')
		{
			i = i + 2;
		}
		else
		{
			i = i + 1;
		}
	}
	_putchar('\n');
}

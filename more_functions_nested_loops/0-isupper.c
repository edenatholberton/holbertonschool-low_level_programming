#include "main.h"

/**
 * _isupper - function that checks for uppercase letters and returns a value.
 * @c: the int to check
 *
 * Return: 1 if the int is uppercase, 0 if not.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

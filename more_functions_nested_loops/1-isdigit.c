#include "main.h"

/**
 * _isdigit.c - function that checks for a digit 0 through 9.
 * @c: the int to check
 *
 * Return: 1 if the int is 0-9, 0 if not.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - checks for the lowercase character
 *
 * @c - the charcter to check ("c" is describing the parameter)
 *
 * Return: Always 1 or 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

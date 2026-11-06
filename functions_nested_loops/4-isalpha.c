#include "main.h"

/**
 * _isalpha - checks if it's a letter, lowercase or uppercase.
 *
 * @c: the character to check ("c" is describing the parameter)
 *
 * Return: Always 1 or 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

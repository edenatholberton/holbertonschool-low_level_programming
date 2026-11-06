#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: the number to check ("n" is describing the parameter)
 *
 * Return: n or n*-1
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

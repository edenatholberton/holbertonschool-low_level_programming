#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: number of bytes to allocate
 *
 * Description: ends the program with status 98 if malloc fails
 * Return: pointer to the allocated memoy
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}


#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the memory area copied into
 * @src: the memory area copied from
 * @n: how many bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


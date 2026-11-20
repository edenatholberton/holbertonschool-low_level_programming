#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocated memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Description: returns NULL if nmemb or size is 0, or if malloc fails
 * Return: pointer to the allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nmemb * size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}

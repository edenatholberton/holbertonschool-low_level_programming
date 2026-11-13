#include "main.h"
#include <stdio.h>


/**
 * _strncat - appends at most n bytes of src to the dest string
 * @dest: the string that gets added to
 * @src: the string that is copied onto the end of dest
 * @n: the most bytes taken from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

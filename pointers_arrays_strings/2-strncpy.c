#include "main.h"

/**
 * _strncpy - copies at most n bytes of src to dest
 * @dest: the string that src is copied into
 * @src: the string that is copied from
 * @n: the number of bytes written to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strcpy - copies a string from src into dest
 *
 * @dest: the buffer the string is copied into
 * @src: the string to copy
 *
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

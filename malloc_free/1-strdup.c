#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to copy
 *
 * Return: a pointer to the copy, or NULL if str is NULL or malloc fauls
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
	{
	return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[len] = '\0';

	return (dup);
}

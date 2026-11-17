#include "main.h"

/**
 * str_concat - joins two strings into new memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *joined;
	int len1;
	int len2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	joined = malloc(len1 + len2 + 1);
	if (joined == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[len1 + len2] = '\0';
	return (joined);
}

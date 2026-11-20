#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - joins two strings
 * s1: first string
 * s2: second string
 * @n: number of bytes of s2 to use
 *
 * Description: NULL strings are treated as empty strings
 * Return: pointer to the new string, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int take;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		take = len2;
	}
	else
	{
		take = n;
	}
	p = malloc(len1 + take + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < take)
	{
		p[len1 + j] = s2[j];
		j++;
	}
	p[len1 + take] = '\0';
	return (p);
}

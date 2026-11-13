#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the characters that are allowed
 *
 * Return: the number of bytes at the start of s made only of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
			j++;
		}
		if (found == 0)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

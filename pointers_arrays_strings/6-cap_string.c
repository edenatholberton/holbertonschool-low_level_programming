#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to change
 *
 * Return: a pointer to the changed string
 */

char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;
	int j;
	int new_word;

	i = 0;
	new_word = 1;

	while (s[i] != '\0')
	{
		if (new_word == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		new_word = 0;
		j = 0;

		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				new_word = 1;
			}
			j++;
		}
		i++;
	}
	return (s);
}

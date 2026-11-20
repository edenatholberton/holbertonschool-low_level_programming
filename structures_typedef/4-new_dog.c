#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - makes a copy of a string
 * @s: the string to copy
 *
 * Return: pointer to the new copy, or NULL if s is NULL or malloc fails
 */

char *copy_string(char *s)
{
	char *p;
	unsigned int len;
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	p = malloc(len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog, copied
 * @age: the age of the dog
 * @owner: the owner of the dog, copied
 *
 * Return: pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = copy_string(name);
	d->owner = copy_string(owner);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}

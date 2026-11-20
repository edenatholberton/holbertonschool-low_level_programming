#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: first value, included
 * @max: last value, included
 *
 * Description: returns NULL if min is greater than max or malloc fails
 * Return: pointer to the new array, or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

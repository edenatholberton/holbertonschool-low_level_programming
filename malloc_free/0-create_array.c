#include "main.h"

/**
 * create_array - creates an array of char and initializes it with a specific char
 *
 * @size: the number of chars in the array
 * @c: the character to fill the array with
 *
 * Return: a pointer to the array, or NULL if size is 0 or malloc fails
 */

/* gives back an address; takes a count and a char */
char *create_array(unsigned int size, char c)
{
	/* will hold the address of the new array */
	char *arr;
	/* counter for the fill loop */
	unsigned int i;

	/* asking for zero chars? */
	if (size == 0)
	{
		/* nothing to build, give back NULL and stop */
		return (NULL);
	}

	/* ask for size bytes, keep the address in arr */
	arr = malloc(size * sizeof(char));
	/* did malloc fail? */
	if (arr == NULL)
	{
		/* no memory, so give back NULL and stop */
		return (NULL);
	}

	/* start at the first slot */
	i = 0;
	/* repeat for slots 0 up to size - 1 */
	while (i < size)
	{
		/* put the character in slot i */
		arr[i] = c;
		/* move on to the next slot */
		i++;
	}

	/* hand the finished array's address to the caller */
	return (arr);
}


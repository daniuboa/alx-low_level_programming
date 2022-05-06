#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 *
 * @size: argument for size of the array
 * @c: argument for char
 *
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}

		my_array[i] = c;
		i++;
	}

	return (my_array);
}

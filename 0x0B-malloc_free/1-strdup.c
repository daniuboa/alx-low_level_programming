#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated space inmemory.
 *
 * @str: string to be dublicated.
 *
 * Return: NULL (fail) or a pointer to the duplicated string (success)
 */

char *_strdup(char *str)
{
	char *my_array;
	int i, len;

	my_array = malloc(sizeof(str));

	i = len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (my_array == NULL)
	{
		return (NULL);
	}

	i = 0;
	
	while (str[i] != '\0')
	{
		my_array[i] = str[i];
		i++;
	}

	return (my_array);
}

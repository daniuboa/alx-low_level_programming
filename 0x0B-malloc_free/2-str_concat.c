#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: The string to concatenate upon.
 * @s2: Th string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer to the newly allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *my_array;
	int a, b, c;

	c =0;
	my_array = malloc(sizeof(*s1 + *s2));

	if (my_array == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		my_array[c] = s1[a];
		a++;
		c++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		my_array[c] = s2[b];
		b++;
		c++;
	}

	return (my_array);
	free(my_array);
}

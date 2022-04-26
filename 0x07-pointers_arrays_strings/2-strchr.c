#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: Pointer to the null-terminate byte string to be analyzed.
 * @c: Charachter to search for
 *
 * Return: A pointer to first occurrence of c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	/* Loop through strings */
	for (; *(s +i) != '\0'; i++)
	{
		/* Check the character in s is in c */
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s +i);
	}

	return ('\0');
}

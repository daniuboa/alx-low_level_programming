#include "main.h"
#include <stdio.h>

/**
 * isLower - Determines whether ASCII is lowercase
 * @c: Character
 *
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - Determines whether ASCII is a delimeter
 * @c: Character
 *
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimeter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimeter[i])
			return (1);

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: Input string
 *
 * Return: String with capitalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		s++;
	}
	return (ptr);
}

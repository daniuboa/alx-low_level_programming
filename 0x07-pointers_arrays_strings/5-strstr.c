#include "main.h"
#include <stdio.h>

/**
 * compare - Function that compares two strings.
 *
 * @haystack: Pointer to the first null-terminated byte string
 * @needle: Pointer to the second null-terminated byte string.
 *
 * Return: True if haystack and needle are the same.
 */

int compare(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);

		haystack++;
		needle++;
	}

	return (*needle == '\0');
}

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack: Pointer to the null-terminated byte string to examine.
 * @needle: Pointer to the null-terminated byte string to be searched.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}

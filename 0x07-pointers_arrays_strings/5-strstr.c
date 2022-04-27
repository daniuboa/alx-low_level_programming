#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occuerence of the substring in thestring haystack.
 *
 * @haystack: Parameter for haystack
 * @needle: Parameter for needle
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0' && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}

	return ('\0');
}

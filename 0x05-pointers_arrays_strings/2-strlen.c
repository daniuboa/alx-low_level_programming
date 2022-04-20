#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: nput char.
 *
 * Return: The length of a string.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
